// Выполнила Мясоедова Алина Вмк-20
#include <iostream>
#include "Lecturer.h"
using namespace std;

// конструктор по умолчанию
Lecturer::Lecturer() 
	:Human() {				//добавление составляющих базового класса
	academic_degree = no_sciences;					// нет учёной степени
	name_university = "-";					// нет университета
	num_hall = 0;						// номер аудитории
}

Lecturer::Lecturer(const string& _name, const string& _surname,
	const string& _patronymic, const int _age,
	const string& _name_u, const int _number)
    :Human(_name, _surname, _patronymic, _age) //вызывает конструктор базового класса "Human" с параметрами 
	                                                    // Это означает, что конструктор класса "Lecturer" наследует от конструктора класса "Human"
	                                                    //и использует его параметры, чтобы инициализировать свои члены.

{
	set_univ(_name_u);							// сеттер университета
	set_hall(_number);						// сеттер аудитории
	academic_degree = no_sciences;					// нет учёной степени
}

void Lecturer::set_univ(const string& _name_u) {			// сеттер университета
	if (!_name_u.empty()) {										// если строка не пустая,
		name_university = _name_u;								// тогда записываем
	}
	else {
		throw invalid_argument("Пустая строка университета!");
	}
}

void Lecturer::set_hall(const int _number) {			// сеттер аудитории
	if ((_number > 0) && (_number < 1000)) {		// если номер больше нуля и меньше 1000
		num_hall = _number;						// тогда записываем
	}
	else {
		throw  invalid_argument("Неверный номер кабинета!");
	}
}

void Lecturer::acd_dgr_up() {						// присвоение учёной степени
	if (academic_degree == no_sciences) {
		academic_degree = candidate_sciences;			// если степени нет, то кандидат наук
	}
	else if (academic_degree == candidate_sciences) {
		academic_degree = doctor_sciences;			// если кандидат наук, то доктор наук
	}
}

void Lecturer::acd_dgr_down()
{
	if (academic_degree == doctor_sciences){
		academic_degree = candidate_sciences;
}
	else if (academic_degree == candidate_sciences)
	{
		academic_degree = no_sciences;
	}


}

string Lecturer::get_acd_dgr() const {			// возврат учёной степени
	return academic_degree;
}

string Lecturer::get_univ() const {			// возврат университета
	return name_university;
}

int Lecturer::get_hall() const {					// возврат номера аудитории
	return num_hall;
}

string Lecturer::tostring() const {			// формирование строки с данными через абзац

	string full = "Имя: " + Human::get_name() + "\n"
		+ "Фамилия: " + Human::get_surname() + "\n"
		+ "Отчество: " + Human::get_patronymic() + "\n"
		+ "Возраст: " + to_string(Human::get_age()) + "\n"
		+ "Учёная степень: " + academic_degree + "\n"
		+ "Университет: " + name_university + "\n"
		+ "Номер аудитории: " + to_string(num_hall);
	return full;
}
