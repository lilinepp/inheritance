
// Выполнила Мясоедова Алина Вмк-20
#include <iostream>
#include "Human.h"
using namespace std;

Human::Human() {								// конструктор по умолчанию
	name = "-";							// отсутствие имени по умолчанию
	surname = "-";								// отсутствие фамилии по умолчанию
	patronymic = "-";							// отсутствие отчества по умолчанию
	age = 0;									// нулевой возраст - человека не существует
	
}

Human::Human(const string& _name, const string& _surname, const string& _patronymic, const int _age) {		// констуктор с входными данными
	set_name(_name);								// сеттер для имени
	set_surname(_surname);								// сеттер для фамилии
	set_patronymic(_patronymic);								// сеттер для отчества
	set_age(_age);									// сеттер для возраст
}

void Human::set_name(const string& _name) {	// сеттер для имени
	if (!_name.empty()) {							// если строка имени не пустая,
		name = _name;							// тогда имя присваивается
	}
	else {
		throw invalid_argument("Пустая строка имени!");
	}
}

void Human::set_surname(const string& _surname) {	// сеттер для фамилии
	if (!_surname.empty()) {							// если строка фамилии не пустая,
		surname = _surname;							// тогда фамилия присваивается
	}
	else {
		throw invalid_argument("Пустая строка фамилии!");
	}
}

void Human::set_patronymic(const string& _patronymic) {	// сеттер для отчества
	if (!_patronymic.empty()) {							// если строка отчества не пустая,
		patronymic = _patronymic;							// тогда отчество присваивается
	}
	else {
		throw invalid_argument("Пустая строка отчества!");
	}
}

void Human::set_fuln(const string& _name, const string& _surname, const string& _patronymic) {		// сеттер для инициалов
	set_name(_name);								// сеттер для имени
	set_surname(_surname);								// сеттер для фамилияя
	set_patronymic(_patronymic);								// сеттер для отчества
}

void Human::set_age(const int _age) {				// сеттер для возраста
	if ((_age >= 0) && (_age < 100)) {				// если возраст в диапазоне 0-100,
		age = _age;								// тогда возраст присваивается
	}
	else {
		throw invalid_argument("Возраст не соответствует реальности!");
	}
};




string Human::get_name() const {				// возврат имени
	return name;
};

string Human::get_surname() const {				// возврат фамилии
	return surname;
};

string Human::get_patronymic() const {				// возврат отчества
	return patronymic;
};

int Human::get_age() const {						// возврат возраста
	return age;
};


void Human::add_age(const int _add_age) {					// прибавление к возрасту
	if ((age + _add_age > 0) && (age + _add_age < 100)) {			// если прибавление не зайдёт за диапазон 0-100,
		age += _add_age;									// тогда прибавляем
	}
	else {
		throw invalid_argument("Прибавление выходит за границы теоретического возраста!");
	}
};

void Human::sub_age(const int _sub_age) {					// вычитание из возраста
	if ((age - _sub_age > 0) && (age - _sub_age < 100)) {			// если вычитание не зайдёт за диапазон 0-100,
		age -= _sub_age;									// тогда вычитаем
	}
	else {
		throw invalid_argument("Вычитание выходит за границы теоретического возраста!");
	}
};



string Human::tostring() const {				// формирование строки с данными через абзац

	string full = "Имя: " + name + "\n"
		+ "Фамилия: " + surname + "\n"
		+ "Отчество: " + patronymic + "\n"
		+ "Возраст: " + to_string(age);
	return full;
};

