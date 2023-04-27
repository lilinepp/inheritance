// Выполнила Мясоедова Алина Вмк-20
#include <iostream>
#include "Student.h"
using namespace std;

Student::Student() :Human() {				// конструктор по умолчанию
	num_record = 0;							// нулевой номер зачётной книжки
	num_course = 0;							// нулевой номер курса
	group = "-";							// никакая группа
	status = "-";							// никакой статус
}

Student::Student(const string& _name, const string& _surname, const string& _patronymic,
	const int&_age, const int& _weight, const int& _num_rec, const int& _num_crs, 
	const string& _group, const string& _status) 
	:Human(_name, _surname, _patronymic, _age,_weight) {
	
	set_num_rec(_num_rec);						// сеттер номера зачётки
	set_num_crs(_num_crs);						// сеттер номера курса
	set_grp(_group);								// сеттер названия группы
	set_stat(_status);							// сеттер статуса студента
}

void Student::set_num_rec(const int& _num_rec) {		// сеттер номера зачётки
	if ((_num_rec > 100000) && (_num_rec < 999999)) {		// если номер шестизначный,
		num_record = _num_rec;						// тогда записываем
	}
	else {
		throw invalid_argument("Неверный формат номера!");
	}
}

void Student::set_num_crs(const int& _num_crs) {		// сеттер номера курса
	if ((_num_crs < 6) && (_num_crs > 0)) {				// если с первого курса по пятый,
		num_course = _num_crs;						// тогда записываем
	}
	else {
		throw invalid_argument("Неправильный номер курса!");
	}
}

void Student::set_nums(const int& _num_rec, const int& _num_crs) {	// совмещённый сеттер
	set_num_rec(_num_rec);
	set_num_crs(_num_crs);
}

void Student::set_grp(const string& _group) {				// сеттер группы
	if (!_group.empty()) {										// empty-если строка не пустая,
		group = _group;											// тогда записываем
	}
	else {
		throw invalid_argument("Пустая строка группы!");
	}
}

void Student::set_stat(const string& _status) {			// сеттер статуса
	if (!_status.empty()) {									// если строка не пустая,
		status = _status;									// тогда записываем
	}
	else {
		throw invalid_argument("Пустая строка статуса!");
	}
}

int Student::get_num_rec() const {				// возврат номера зачётки
	return num_record;
};

int Student::get_num_crs() const {				// возврат номера курса
	return num_course;
}

string Student::get_grp() const {			// возврат названия группы
	return group;
}

string Student::get_stat() const {			// возврат статуса
	return status;
}

void Student::add_crs(const int& v) {								// прибавить курс, если не выходит за пределы
	if ((num_course + v < 6) && (num_course + v > 0)) {
		num_course += v;
	}
	else {
		throw invalid_argument("Выход за границы учебного плана при сложении!");
	}
}

void Student::sub_crs(const int& v) {
	if ((num_course - v < 6) && (num_course - v > 0)) {				// вычесть курс, если не выходит за пределы
		num_course -= v;
	}
	else {
		throw invalid_argument("Выход за границы учебного плана при вычитании!");
	}
}
string Student::get_string() const {		// формирование строки с данными через абзац

	string full = "Имя: " + Human::get_name() + "\n"
		+ "Фамилия: " + Human::get_surname() + "\n"
		+ "Отчество: " + Human::get_patronymic() + "\n"
		+ "Возраст: " + to_string(Human::get_age()) + "\n"
		+ "Вес: " + to_string(Human::get_weight()) + "\n"
		+ "Номер зачётки: " + to_string(num_record) + "\n"
		+ "Номер курса: " + to_string(num_course) + "\n"
		+ "Группа: " + group + "\n"
		+ "Статус: " + status;
	return full;
}