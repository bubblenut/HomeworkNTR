#include <mutex>
#include <thread>
#include <vector>
#include <iostream>
#include <chrono>

std::mutex strMutex;

void fillString (const std::vector<std::string>& data, std::string& str) {
	for (auto& word : data) {
		strMutex.lock();
		str += word;
		strMutex.unlock();
		std::this_thread::sleep_for(std::chrono::milliseconds(100));
	}
}

void readString (const std::vector<std::string>& data, const std::string& str) {
	for (auto& word : data) {
		strMutex.lock();
		std::cout << "str is: " << str << '\n';
		strMutex.unlock();
		std::this_thread::sleep_for(std::chrono::milliseconds(100));
	}
}

int main() {
	std::vector<std::string> data = {"Hello ", "guys.", "Today ", "we are ", "watching ", "TOP-5 ", "capybaras!"};
	std::string str;

	std::thread fill(fillString, std::ref(data), std::ref(str));
	std::thread read(readString, std::ref(data), std::ref(str));
	fill.join();
	read.join();
}