#pragma once
// Класс односвязного списка LinkedList
// Внутри себя также содержит:
//	- описание структуры ноды ListNode
//	- описание класса итератора ListIterator



// Односвязный список
template <class T>
class LinkedList {
private:
	// Нода односвязного списка
	struct ListNode {
		friend class ListIterator;
		T data;

		// Указатель я решил хранить именно в сыром виде, т.к. он не запрещает копирование и не загромождает память счетчиками.
		ListNode *next;
		ListNode() : data(), next(nullptr) {};
		ListNode(T data) : data(data), next(nullptr) {}
		ListNode(T data, ListNode* next) : data(data), next(next) {}
	};

	ListNode* head;

public:
	LinkedList() : head() {};

	// Деструктор с защитой от утечки
	~LinkedList() {
		this->clear();
	}

	// Итератор списка. Все равно нужен для find(), а еще делает список более удобным для пользователя
	class ListIterator {
	friend class LinkedList;
	public:
		ListIterator(ListNode* node) : node(node) {}

		T operator*() const {
			if(node) {
				return node->data;
			}
			throw std::logic_error("Попытка извлечь данные из nullptr ноды");
			return T();
		}

		bool operator==(const ListIterator& other) const {
			if( this == &other ) {
				return true;
			}
			return node == other.node;
		}

		bool operator!=(const ListIterator& other) const {
			return !operator==(other);
		}

		void operator++() {
			if(node) {
				node = node->next;
			}
		}
	private:
		ListNode* node;
	};

	ListIterator begin() const {
		return ListIterator(head);
	}

	ListIterator end() const {
		return ListIterator(nullptr);
	}

	// Проверить, пуст ли список (знаю что не просили, но с this->empty() реализация читабельнее)
	bool empty() const {
		return head == nullptr;
	}

	// Вставить элемент в начало списка
	void push_front(const T& data) {
		if (this->empty()) {
			head = new ListNode(data);
		} else {
			auto newHead = new ListNode(data, head);
			head = newHead;
		}
	}

	// Вставить элемент после определенной ноды
	void insert_after(const ListIterator& iterator, const T& data) {
		if (!iterator.node) {
			throw std::logic_error("Попытка добавить элемент после несуществующей ноды");
			return;
		}
		auto* tmp = iterator.node->next;
		auto newNode = new ListNode(data, tmp);
		iterator.node->next = newNode;
	}

	// Удалить элемент из начала списка
	void pop_front() {
		if (this->empty()) {
			throw std::logic_error("Попытка удалить элемент из пустого списка");
		}
		auto tmp = head;
		head = head->next;
		delete tmp;
	}

	// Удалить элемент после определенной ноды
	void erase_after(const ListIterator& iterator) {
		if (!(iterator.node)) {
			throw std::logic_error("Попытка удалить элемент после несуществующей ноды");
		}
		if (!iterator.node->next) {
			return;
		}
		auto tmp = iterator.node->next;
		iterator.node->next = iterator.node->next->next;
		delete tmp;
	}

	//Найти первое вождение target в списке, вернуть итератор на end если не найдено
	ListIterator find(const T& target) const {
		ListNode* tmp = head;
		while(tmp) {
			if(tmp->data == target) {
				return ListIterator(tmp);
			}
			tmp = tmp->next;
		}
		return this->end();
	}

	// Все равно в деструкторе необходимо будет освободить всю память
	// Так что я решил вынести очистку в отдельную функцию, пусть будет и у пользователя
	void clear() {
		while(head) {
			ListNode* tmp = head->next;
			delete head;
			head = tmp;
		}
	}
};
