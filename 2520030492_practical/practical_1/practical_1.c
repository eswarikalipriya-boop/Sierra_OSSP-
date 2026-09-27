#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    char buf[100];

    printf("Enter a command:\n");

    int n = read(0, buf, sizeof(buf) - 1);

    if (n > 0)
    {
        buf[n] = '\0';

        if (buf[n - 1] == '\n')
            buf[n - 1] = '\0';
    }

    int pid;
    pid = fork();

    if (pid == 0)
    {
        printf("\nChild PID: %d\n", getpid());
        printf("Parent PID: %d\n", getppid());

        execl("/bin/sh", "sh", "-c", buf, NULL);

        printf("Execution failed\n");
    }
    else if (pid > 0)
    {
        printf("\nParent PID: %d\n", getpid());
        printf("Child PID: %d\n", pid);

        wait(NULL);

        printf("\nChild Process completed.\n");
    }
    else
    {
        printf("Fork failed\n");
    }

    return 0;
}

