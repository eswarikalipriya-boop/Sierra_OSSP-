# Practical-04

## Task 1

### Program

The program creates three child processes using the `fork()` system call. The parent process uses `wait()` to collect two child processes and `waitpid()` to collect the remaining child process.

### System Calls Used

- `fork()` - Creates a new child process.
- `wait()` - Waits for any child process to finish.
- `waitpid()` - Waits for a specific child process.
- `getpid()` - Returns the process ID.
- `sleep()` - Suspends the process for a specified number of seconds.
- `exit()` - Terminates the child process.

### Zombie Process 1

The child process exits while the parent process does not call `wait()`. The parent sleeps for 30 seconds, allowing the terminated child to remain as a zombie until the parent exits.

### Zombie Process 2

The parent process uses `wait()` to collect the terminated child process. This prevents the child from remaining as a zombie.

### Files

- `practical_4.c` - Demonstrates `fork()`, `wait()` and `waitpid()`.
- `zombie1.c` - Demonstrates a zombie process.
- `zombie2.c` - Demonstrates collecting a child using `wait()`.

### Execution

All programs were compiled using GCC and executed through the terminal.
