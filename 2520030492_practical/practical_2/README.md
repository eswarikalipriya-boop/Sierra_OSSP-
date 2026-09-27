# Practical 2 - File Copy Using System Calls

## Aim

To write a C program to copy the contents of one file to another file using system calls.

## Description

This program copies the contents of `source.txt` into `destination.txt`.

The program uses the following system calls:

* `open()` to open and create files
* `read()` to read data from the source file
* `write()` to write data to the destination file
* `close()` to close the files

The destination file is opened using `O_WRONLY | O_CREAT | O_TRUNC`. This allows the program to write to the file, create it if it does not exist, and clear its previous contents.

## System Calls Used

### `open()`

Opens the source file for reading and opens the destination file for writing.

### `read()`

Reads the contents of the source file into a buffer.

### `write()`

Writes the data from the buffer into the destination file.

### `close()`

Closes the source and destination files after the copying operation is completed.

## File Permissions

The destination file is created with permission:

```text
0644
```

This gives the owner read and write permission, while others have read-only permission.

## Compilation

```bash
gcc practical_2.c -o practical_2
```

## Execution

```bash
./practical_2
```

## Sample Output

```text
File copied successfully
```

## Verification

The copied contents can be checked using:

```bash
cat destination.txt
```

Example:

```text
This is Practical 2.
This file is copied using open, read, write and close system calls.
```

## Result

The program successfully copies the contents of `source.txt` to `destination.txt` using the `open()`, `read()`, `write()`, and `close()` system calls.

