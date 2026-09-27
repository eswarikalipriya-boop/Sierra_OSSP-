# Practical 3 - Process Creation Using fork()

## Aim

To write a C program to create a child process using the `fork()` system call and display the process ID (PID) and parent process ID (PPID).

## Description

This program demonstrates process creation using the `fork()` system call.

Before calling `fork()`, the program displays the PID and PPID of the current process.

After `fork()`:

* The child process displays its PID and its parent's PID.
* The parent process displays its PID, its parent's PID, and the child's PID.
* The process state is displayed as Running.

## System Call Used

### `fork()`

The `fork()` system call creates a new child process. The child process receives a separate process ID.

### `getpid()`

Returns the process ID of the current process.

### `getppid()`

Returns the process ID of the parent process.

## Compilation

```bash
gcc practical_3.c -o practical_3
```

## Execution

```bash
./practical_3
```

## Sample Output

```text
Before fork()
PID: 12345
PPID: 1000
Process State: Running

Parent Process
PID: 12345
PPID: 1000
Child PID: 12346
Process State: Running

Child Process
PID: 12346
PPID: 12345
Process State: Running
```

Note: The PID and PPID values will be different each time the program is executed.

## Result

The program successfully creates a child process using the `fork()` system call and displays the PID and PPID of both the parent and child processes.

