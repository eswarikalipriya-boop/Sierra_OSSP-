Practical 6 – Client-Server Communication Using Named Pipes
Aim
To demonstrate inter-process communication between a client and server using named pipes (FIFOs).
Description
This practical contains two programs: a client and a server.
The server creates two named pipes:
	•	fifo1 – used to send messages from the client to the server.
	•	fifo2 – used to send the server's reply back to the client.
The client sends a message through fifo1. The server reads the message, displays it, adds a server response, and sends the modified message back through fifo2.
Files
	•	client.c – client program.
	•	server.c – server program.
Functions Used
	•	mkfifo() – creates named pipes.
	•	open() – opens the FIFO for reading or writing.
	•	read() – reads data from the FIFO.
	•	write() – writes data to the FIFO.
	•	close() – closes file descriptors.
	•	fgets() – reads the client's message.
	•	strcat() – appends the server response.
Compilation
gcc server.c -o server
gcc client.c -o client
Execution
First run the server:
./server
Then, in another terminal, run the client:
./client
Enter a message when prompted.
Example
Client:
Enter message: Hello Server
Server Reply: Hello Server [Received by Server]
Server:
Client: Hello Server
Conclusion
This practical demonstrates client-server communication using named pipes (FIFOs) for inter-process communication.
