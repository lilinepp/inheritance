
// ��������� ��������� ����� ���-20
#include <iostream>
#include "Human.h"
using namespace std;

Human::Human() {								// ����������� �� ���������
	name = "-";							// ���������� ����� �� ���������
	surname = "-";								// ���������� ������� �� ���������
	patronymic = "-";							// ���������� �������� �� ���������
	age = 0;									// ������� ������� - �������� �� ����������
	weight = 0;                                 // ������� ��� - �������� �� ����������
}

Human::Human(const string& _name, const string& _surname, const string& _patronymic, const int& _age, const int& _weight) {		// ���������� � �������� �������
	set_name(_name);								// ������ ��� �����
	set_surname(_surname);								// ������ ��� �������
	set_patronymic(_patronymic);								// ������ ��� ��������
	set_age(_age);									// ������ ��� ��������
	set_weight(_weight);
}

void Human::set_name(const string& _name) {	// ������ ��� �����
	if (!_name.empty()) {							// ���� ������ ����� �� ������,
		name = _name;							// ����� ��� �������������
	}
	else {
		throw invalid_argument("������ ������ �����!");
	}
}

void Human::set_surname(const string& _surname) {	// ������ ��� �������
	if (!_surname.empty()) {							// ���� ������ ������� �� ������,
		surname = _surname;							// ����� ������� �������������
	}
	else {
		throw invalid_argument("������ ������ �������!");
	}
}

void Human::set_patronymic(const string& _patronymic) {	// ������ ��� ��������
	if (!_patronymic.empty()) {							// ���� ������ �������� �� ������,
		patronymic = _patronymic;							// ����� �������� �������������
	}
	else {
		throw invalid_argument("������ ������ ��������!");
	}
}

void Human::set_fuln(const string& _name, const string& _surname, const string& _patronymic) {		// ������ ��� ���������
	set_name(_name);								// ������ ��� �����
	set_surname(_surname);								// ������ ��� ��������
	set_patronymic(_patronymic);								// ������ ��� ��������
}

void Human::set_age(const int& _age) {				// ������ ��� ��������
	if ((_age >= 0) && (_age < 100)) {				// ���� ������� � ��������� 0-100,
		age = _age;								// ����� ������� �������������
	}
	else {
		throw invalid_argument("������� �� ������������� ����������!");
	}
};

void Human::set_weight(const int& _weight) {				// ������ ��� ����
	if ((_weight >= 0) && (_weight < 250)) {				// ���� ��� � ��������� 0-250,
		weight = _weight;								// ����� ��� �������������
	}
	else {
		throw invalid_argument("��� �� ������������� ����������!");
	}
};


string Human::get_name() const {				// ������� �����
	return name;
};

string Human::get_surname() const {				// ������� �������
	return surname;
};

string Human::get_patronymic() const {				// ������� ��������
	return patronymic;
};

int Human::get_age() const {						// ������� ��������
	return age;
};

int Human::get_weight() const {						// ������� ��������
	return weight;
};

void Human::add_age(const int& _add_age) {					// ����������� � ��������
	if ((age + _add_age > 0) && (age + _add_age < 100)) {			// ���� ����������� �� ����� �� �������� 0-100,
		age += _add_age;									// ����� ����������
	}
	else {
		throw invalid_argument("����������� ������� �� ������� �������������� ��������!");
	}
};

void Human::sub_age(const int& _sub_age) {					// ��������� �� ��������
	if ((age - _sub_age > 0) && (age - _sub_age < 100)) {			// ���� ��������� �� ����� �� �������� 0-100,
		age -= _sub_age;									// ����� ��������
	}
	else {
		throw invalid_argument("��������� ������� �� ������� �������������� ��������!");
	}
};

void Human::add_weight(const int& _add_weight) {					// ����������� � ����
	if ((weight + _add_weight > 0) && (weight + _add_weight < 250)) {			// ���� ����������� �� ����� �� �������� 0-250,
		weight += _add_weight;									// ����� ����������
	}
	else {
		throw invalid_argument("����������� ������� �� ������� �������������� ����!");
	}
};

void Human::sub_weight(const int& _sub_weight) {					// ��������� �� ����
	if ((weight - _sub_weight > 0) && (weight - _sub_weight < 250)) {			// ���� ��������� �� ����� �� �������� 0-250,
		weight -= _sub_weight;									// ����� ��������
	}
	else {
		throw invalid_argument("��������� ������� �� ������� �������������� ����!");
	}
};


string Human::get_string() const {				// ������������ ������ � ������� ����� �����

	string full = "���: " + name + "\n"
		+ "�������: " + surname + "\n"
		+ "��������: " + patronymic + "\n"
		+ "�������: " + to_string(age) + "\n"
		+ "���: " + to_string(weight);
	return full;
};

