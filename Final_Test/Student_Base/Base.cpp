#include <unordered_map>
#include <iostream>
#include <memory>

struct Student {
	const unsigned int id;
	std::string name;
	unsigned int age;
};

class StudentBase {
private:
	unsigned int id_;
	std::unordered_map<unsigned int, std::shared_ptr<Student>> base_;
public:
	StudentBase() : id_(0) { };

	// Добавить студента
	void insertStudent(const std::string& name, const unsigned int age) {
		base_[++id_] = std::make_shared<Student>(id_, name, age);
	}

	// Удалить студента
	void eraseSudent(const unsigned int id) {
		if (base_.find(id) == base_.end()) {
			std::cout << "Попытка удалить несуществующего студента";
			return;
		}
		base_.erase(id);
	}

	// Получить информацию о студенте
	std::shared_ptr<Student> getStudent(const unsigned int id) {
		if (base_.find(id) == base_.end()) {
			std::cout << "Попытка обращения к несуществующему студенту";
			return nullptr;
		}
		return base_[id];
	}
};