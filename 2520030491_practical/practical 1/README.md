# Practical-01

## Task 1

### C-Program

The C program creates a child process using `fork()`. The child process displays its PID and parent PID and executes the command entered by the user using `execl()`. The parent process waits for the child process to complete using `wait()`.

### System Calls Used

- `fork()` - Creates a child process.
- `execl()` - Executes the command in the child process.
- `wait()` - Makes the parent wait until the child process completes.
- `getpid()` - Returns the process ID of the current process.
- `getppid()` - Returns the process ID of the parent process.
- `read()` - Reads the command entered by the user.

### Commands

- `uname -a` - Displays system and kernel information.
- `lscpu` - Displays CPU information.
- `lsblk` - Displays block-device information.
- `ps` - Displays running processes.
- `top` - Displays system activity and running processes.

### Output

The program was compiled using GCC and executed successfully. The parent and child process IDs were displayed, and the child process executed the `uname -a` command.

### LSCPU

CPU information.

### LSBLK

Block-device information.

### PS

Process information.

### Top

System activity and running processes.
