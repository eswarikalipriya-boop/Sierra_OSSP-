# Practical-05

## Task 1 - Producer Consumer using Pipe

The program demonstrates inter-process communication using a pipe. The parent process acts as the producer and the child process acts as the consumer.

### System Calls Used

- `pipe()` - Creates a communication channel between processes.
- `fork()` - Creates a child process.
- `write()` - Writes data into the pipe.
- `read()` - Reads data from the pipe.
- `close()` - Closes the pipe.
- `wait()` - Makes the parent wait for the child process.

## Task 2 - Pipe Exec

The program demonstrates communication between two processes using a pipe and `dup2()`.

The first child executes `ls -l` and sends its output through the pipe. The second child receives the output and executes `grep .c` to display C source files.

### System Calls Used

- `pipe()` - Creates the communication channel.
- `fork()` - Creates child processes.
- `dup2()` - Redirects standard input and output.
- `execlp()` - Executes `ls` and `grep`.
- `close()` - Closes the pipe ends.
- `wait()` - Waits for child processes.

### Execution

The programs were compiled using GCC and executed through the terminal.

### Output

The Pipe Exec program displays the C source files obtained from the `ls -l` output.
