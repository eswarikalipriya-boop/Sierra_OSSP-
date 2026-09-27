# Zombie 1 – Zombie Process Demonstration

## Aim

To demonstrate a zombie process created when a child process terminates while the parent process does not immediately call `wait()`.

## Description

The program creates a child process using `fork()`.

The child process:

* Prints its process ID.
* Exits immediately.

The parent process:

* Prints its process ID.
* Does not call `wait()` immediately.
* Sleeps for 30 seconds.
* Exits after the sleep.

During the time the child has exited but the parent has not yet collected its termination status, the child can remain as a zombie process.

## System Calls Used

* `fork()` – creates the child process.
* `getpid()` – obtains the process ID.
* `sleep()` – keeps the parent process alive.
* `exit()` – terminates the child process.

## Compilation

```bash
gcc zombie_1.c -o zombie_1
```

## Execution

```bash
./zombie_1
```

## Observation

While the parent is sleeping, another terminal can be used to inspect the processes:

```bash
ps -ax | grep zombie_1
```

The exact process-state display depends on the operating system.

## Conclusion

This practical demonstrates why a parent process should collect the termination status of its child using `wait()` or `waitpid()`.
