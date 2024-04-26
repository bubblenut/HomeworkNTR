#include <iostream>
#include <cstring>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>

class CycleBuffer {
private:
		static const int size = 1024;
		char buffer[size];
		int head = 0;
		int tail = 0;

public:
		void put(char data) {
				buffer[head] = data;
				head = (head + 1) % size;
				if (head == tail) {
						tail = (tail + 1) % size;
				}
		}

		bool get(char& data) {
				if (tail == head) {
						return false;
				}
				data = buffer[tail];
				tail = (tail + 1) % size;
				return true;
		}

		bool empty() {
				return head == tail;
		}
};

int main() {
		int server_fd, client_socket;
		struct sockaddr_in address;
		int opt = 1;
		int addrlen = sizeof(address);


		if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0) {
				perror("socket failed");
				exit(EXIT_FAILURE);
		}

		address.sin_family = AF_INET;
		address.sin_addr.s_addr = INADDR_ANY;
		address.sin_port = htons(8080);

		if (bind(server_fd, (struct sockaddr *)&address, sizeof(address)) < 0) {
				perror("bind failed");
				exit(EXIT_FAILURE);
		}

		if (listen(server_fd, 3) < 0) {
				perror("listen");
				exit(EXIT_FAILURE);
		}

		if ((client_socket = accept(server_fd, (struct sockaddr *)&address, (socklen_t*)&addrlen)) < 0) {
				perror("accept");
				exit(EXIT_FAILURE);
		}

		char data;
		CycleBuffer buf;
		while (true) {
				int bytes_read = recv(client_socket, &data, 1, 0);
				if (bytes_read <= 0) break;

				buf.put(data);
				
				if (data == '\n') {
						while (!buf.empty()) {
								buf.get(data);
								std::cout << data;
						}
						const char* ack_message = "Message received\n";
						send(client_socket, ack_message, strlen(ack_message), 0);
				}
		}
		close(client_socket);
		close(server_fd);

		return 0;
}
