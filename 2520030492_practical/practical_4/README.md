# Practical 4 – Parent and Child Process Synchronization

## Aim

To create multiple child processes using `fork()` and demonstrate process synchronization using `wait()` and `waitpid()`.

## Description

This program creates three child processes using `fork()`.

Each child process:

* Prints its process ID.
* Sleeps for a different amount of time.
* Prints a completion message.
* Exits.

The parent process uses `wait()` to collect two child processes and `waitpid()` to collect the remaining child process.

## System Calls Used

* `fork()` – creates a new child process.
* `getpid()` – returns the process ID.
* `wait()` – waits for a child process to finish.
* `waitpid()` – waits for a specific child process.
* `sleep()` – pauses execution.
* `exit()` – terminates the child process.

## Compilation

```bash
gcc practical_4.c -o practical_4
```

## Execution

```bash
./practical_4
```

## Note

The order of the child-process output may vary because process scheduling is controlled by the operating system.
Y
