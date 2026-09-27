# Practical 1 - Process Creation and Command Execution

## Aim

To write a C program that demonstrates process creation using `fork()`, execution of commands using `execl()`, and synchronization of parent and child processes using `wait()`.

## Description

This program accepts a command from the user and creates a child process using `fork()`.

The child process displays its Process ID (PID) and Parent Process ID (PPID), and then executes the given command using:

```c
execl("/bin/sh", "sh", "-c", buf, NULL);
```

The parent process displays its own PID and the child's PID. It then waits for the child process to complete using `wait()`.

The program can execute commands such as:

* `ls`
* `ps`
* `pwd`
* `top -n 1`

## System Calls Used

### 1. `fork()`

Creates a new child process.

### 2. `getpid()`

Returns the Process ID of the current process.

### 3. `getppid()`

Returns the Process ID of the parent process.

### 4. `execl()`

Replaces the child process with the shell and executes the command entered by the user.

### 5. `wait()`

Makes the parent process wait until the child process finishes.

### 6. `read()`

Reads the command entered by the user from standard input.

## Compilation

Compile the program using:

```bash
gcc practical_1.c -o practical_1
```

## Execution

Run the program using:

```bash
./practical_1
```

## Sample Execution

### Using `ps`

```text
Enter a command:

Parent PID: 1234
Child PID: 1235

Child PID: 1235
Parent PID: 1234

    PID TTY          TIME CMD
   1234 pts/0    00:00:00 practical_1
   1235 pts/0    00:00:00 sh
   1236 pts/0    00:00:00 ps

Child Process completed.
```

### Using `top -n 1`

```text
Enter a command:

Parent PID: 1234
Child PID: 1237

Child PID: 1237
Parent PID: 1234

top - 20:30:15 up ...
Tasks: ...
%Cpu(s): ...
MiB Mem : ...
...
PID USER      PR  NI    VIRT    RES    SHR S  %CPU %MEM     TIME+ COMMAND
...

Child Process completed.
```

> **Note:** PID numbers and system information will be different on different systems.

## Result

The program successfully demonstrates process creation using `fork()`, command execution using `execl()`, and parent-child synchronization using `wait()`. Commands such as `ps` and `top -n 1` can be executed through the child process.

