PRACTICAL 6

TASK 1: CLIENT-SERVER COMMUNICATION USING FIFO

Client and Server programs communicate using named pipes (FIFO).

Files:
1. client.c
2. server.c

FIFO Files:
fifo1 - Used by client to send message to server.
fifo2 - Used by server to send reply to client.

Execution:

Compile:
gcc client.c -o client
gcc server.c -o server

Run Server:
./server

Run Client in another Terminal:
./client

Sample Output:

Client:
Enter message: Hello Server
Server Reply: Hello Server [Received by Server]

Server:
Client: Hello Server


TASK 2: SIGNAL HANDLING

The signal handler program handles SIGINT, SIGTERM and SIGUSR1 signals.

File:
signal_handler.c

Execution:

Compile:
gcc signal_handler.c -o signal_handler

Run:
./signal_handler

Signals Tested:

SIGINT:
SIGINT received (Ctrl+C)

SIGUSR1:
SIGUSR1 received

SIGTERM:
SIGTERM received

SIGTERM terminates the process.
