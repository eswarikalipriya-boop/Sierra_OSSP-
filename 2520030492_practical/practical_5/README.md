Practical 5 – Pipe Communication Between Processes
Aim
To demonstrate inter-process communication using a pipe and process execution using fork(), dup2(), and execlp().
Description
This program creates a pipe for communication between two child processes.
The first child process executes the ls -l command and redirects its standard output to the pipe.
The second child process redirects its standard input from the pipe and executes the grep .c command.
Thus, the program performs the equivalent of:
ls -l | grep .c
The parent process closes the pipe file descriptors and waits for both child processes to finish.
System Calls Used
	•	pipe() – creates a communication channel between processes.
	•	fork() – creates child processes.
	•	dup2() – redirects standard input/output.
	•	close() – closes unused file descriptors.
	•	execlp() – executes another program.
	•	wait() – waits for child processes to terminate.
Compilation
gcc practical_5.c -o practical_5
Execution
./practical_5
Expected Output
The program displays the entries from the current directory whose names contain .c.
Example:
-rw-r--r--  1 user  staff  ... practical_5.c
The exact output depends on the files present in the directory.
Conclusion
This practical demonstrates how a pipe can be used to transfer the output of one process as the input of another process.
