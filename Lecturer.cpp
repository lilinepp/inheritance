// ��������� ��������� ����� ���-20
#include <iostream>
#include "Lecturer.h"
using namespace std;

// ����������� �� ���������
Lecturer::Lecturer() 
	:Human() {				//���������� ������������ �������� ������
	academic_degree = "-";					// ��� ������ �������
	name_university = "-";					// ��� ������������
	num_hall = 0;						// ����� ���������
}

Lecturer::Lecturer(const string& _name, const string& _surname,
	const string& _patronymic, const int& _age, const int& _weight,
	const string& _name_u, const int& _number)
	:Human(_name, _surname, _patronymic, _age,_weight) {


	set_univ(_name_u);							// ������ ������������
	set_hall(_number);						// ������ ���������
	academic_degree = "-";					// ��� ������ �������
}

void Lecturer::set_univ(const string& _name_u) {			// ������ ������������
	if (!_name_u.empty()) {										// ���� ������ �� ������,
		name_university = _name_u;								// ����� ����������
	}
	else {
		throw invalid_argument("������ ������ ������������!");
	}
}

void Lecturer::set_hall(const int& _number) {			// ������ ���������
	if ((_number > 0) && (_number < 1000)) {		// ���� ����� ������ ���� � ������ 1000
		num_hall = _number;						// ����� ����������
	}
	else {
		throw  invalid_argument("�������� ����� ��������!");
	}
}

void Lecturer::acd_dgr_up() {						// ���������� ������ �������
	if (academic_degree == "-") {
		academic_degree = "�������� ����";			// ���� ������� ���, �� �������� ����
	}
	else if (academic_degree == "�������� ����") {
		academic_degree = "������ ����";			// ���� �������� ����, �� ������ ����
	}
}

string Lecturer::get_acd_dgr() const {			// ������� ������ �������
	return academic_degree;
}

string Lecturer::get_univ() const {			// ������� ������������
	return name_university;
}

int Lecturer::get_hall() const {					// ������� ������ ���������
	return num_hall;
}

string Lecturer::get_string() const {			// ������������ ������ � ������� ����� �����

	string full = "���: " + Human::get_name() + "\n"
		+ "�������: " + Human::get_surname() + "\n"
		+ "��������: " + Human::get_patronymic() + "\n"
		+ "�������: " + to_string(Human::get_age()) + "\n"
		+ "���: " + to_string(Human::get_weight()) + "\n"
		+ "������ �������: " + academic_degree + "\n"
		+ "�����������: " + name_university + "\n"
		+ "����� ���������: " + to_string(num_hall);
	return full;
}