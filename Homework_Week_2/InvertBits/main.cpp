#include <iostream>
#include <vector>
#include <chrono>
#include <random>


#define MEMORY_SIZE 10000000u

char array[MEMORY_SIZE];

// на вход поступают:
// - указатель char(он размером с байт, это удобно) char* array
// - размер участка памяти в байтах size_t size
// - и вектор с позициями битов std::vector<size_t> posToInvert
void InvertBits(char* array, size_t size, std::vector<size_t> posToInvert) {
	for (auto& pos : posToInvert) {
		size_t chunk = pos / sizeof(char);
		if (chunk < size) {
			size_t bit = pos % sizeof(char);

			char mask = 1u << bit;
			array[chunk] ^= mask;
		}
	}
}

//Я подумал про параллельное выполнение нескольких InvertBits
//Но по итогу эта оптимизация выигрыша особо не дала
//Чтобы точно определить какой поток в какую область памяти может писать, необходимо отсортировать вектор, а это уже O(n log(n))
//Так что паралеллизм я выбросил из итогового кода по принципу "не усложнять впустую"

int main() {
	std::vector<size_t> posToInvert;
	for (size_t i = 0; i < MEMORY_SIZE; ++i) {
		posToInvert.push_back(i * 8);
		posToInvert.push_back(i * 8 + 1);
		posToInvert.push_back(i * 8 + 3);
	}

	auto start = std::chrono::high_resolution_clock::now();
	InvertBits(array, MEMORY_SIZE, posToInvert);
	auto end = std::chrono::high_resolution_clock::now();
	std::cout << "InvertBits runtime: " << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count() << "ms \n";
}

