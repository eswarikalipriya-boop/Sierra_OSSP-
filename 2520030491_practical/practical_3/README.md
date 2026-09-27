# Practical-03

## Task 1

### Program

The program demonstrates the creation of a child process using the `fork()` system call.

It displays:
- Process ID (PID)
- Parent Process ID (PPID)
- Child Process ID
- Process State

### System Calls Used

- `fork()` - Creates a new child process.
- `getpid()` - Returns the process ID of the current process.
- `getppid()` - Returns the parent process ID of the current process.

### Execution

The program was compiled using GCC and executed through the terminal.

### Output

The program displays the details of the parent and child processes, including their PID, PPID, and process state.
