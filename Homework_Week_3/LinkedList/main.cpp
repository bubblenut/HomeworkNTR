#include <iostream>
#include <forward_list>
#include <algorithm>
#include "LinkedList.h"


// Тут оставил пару тестов, в каждом сравниваю поведение std::forward_list и моего LinkedList

template<class T>
void printList(const T& list) {
	for (auto it : list) {
		std::cout << it << ' ';
	}
	std::cout << '\n';
}

template<class T>
void insertionTest(std::forward_list<T>& list, LinkedList<T>& mylist) {
	list.push_front(4);
	list.push_front(3);
	list.push_front(2);
	list.push_front(1);
	list.insert_after(std::find(list.begin(), list.end() ,2), 1337);

	mylist.push_front(4);
	mylist.push_front(3);
	mylist.push_front(2);
	mylist.push_front(1);
	mylist.insert_after(mylist.find(2), 1337);  //В этой строке заодно тестирую работу LinkedList.find()

	std::cout << "insertionTest   list: ";
	printList(list);  // 1 2 1337 3 4

	std::cout << "insertionTest mylist: ";
	printList(mylist);  // 1 2 1337 3 4
	std::cout << '\n';
}

template<class T>
void deletionTest(std::forward_list<T>& list, LinkedList<T>& mylist) {
	list.pop_front();
	list.erase_after(std::find(list.begin(), list.end() ,2));

	mylist.pop_front();
	mylist.erase_after(mylist.find(2));

	std::cout << "deletionTest   list: ";
	printList(list);  //2 3 4

	std::cout << "deletionTest mylist: ";
	printList(mylist); // 2 3 4
	std::cout << '\n';
}


int main() {
	std::forward_list<int> list;
	LinkedList<int> mylist;

	insertionTest(list, mylist);
	deletionTest(list, mylist);
}
