// ��������� ��������� ����� ���-20
#include <iostream>
#include "Student.h"
using namespace std;

Student::Student() :Human() {				// ����������� �� ���������
	num_record = 0;							// ������� ����� �������� ������
	num_course = 0;							// ������� ����� �����
	group = "-";							// ������� ������
	status = "-";							// ������� ������
}

Student::Student(const string& _name, const string& _surname, const string& _patronymic,
	const int&_age, const int& _weight, const int& _num_rec, const int& _num_crs, 
	const string& _group, const string& _status) 
	:Human(_name, _surname, _patronymic, _age,_weight) {
	
	set_num_rec(_num_rec);						// ������ ������ �������
	set_num_crs(_num_crs);						// ������ ������ �����
	set_grp(_group);								// ������ �������� ������
	set_stat(_status);							// ������ ������� ��������
}

void Student::set_num_rec(const int& _num_rec) {		// ������ ������ �������
	if ((_num_rec > 100000) && (_num_rec < 999999)) {		// ���� ����� ������������,
		num_record = _num_rec;						// ����� ����������
	}
	else {
		throw invalid_argument("�������� ������ ������!");
	}
}

void Student::set_num_crs(const int& _num_crs) {		// ������ ������ �����
	if ((_num_crs < 6) && (_num_crs > 0)) {				// ���� � ������� ����� �� �����,
		num_course = _num_crs;						// ����� ����������
	}
	else {
		throw invalid_argument("������������ ����� �����!");
	}
}

void Student::set_nums(const int& _num_rec, const int& _num_crs) {	// ����������� ������
	set_num_rec(_num_rec);
	set_num_crs(_num_crs);
}

void Student::set_grp(const string& _group) {				// ������ ������
	if (!_group.empty()) {										// empty-���� ������ �� ������,
		group = _group;											// ����� ����������
	}
	else {
		throw invalid_argument("������ ������ ������!");
	}
}

void Student::set_stat(const string& _status) {			// ������ �������
	if (!_status.empty()) {									// ���� ������ �� ������,
		status = _status;									// ����� ����������
	}
	else {
		throw invalid_argument("������ ������ �������!");
	}
}

int Student::get_num_rec() const {				// ������� ������ �������
	return num_record;
};

int Student::get_num_crs() const {				// ������� ������ �����
	return num_course;
}

string Student::get_grp() const {			// ������� �������� ������
	return group;
}

string Student::get_stat() const {			// ������� �������
	return status;
}

void Student::add_crs(const int& v) {								// ��������� ����, ���� �� ������� �� �������
	if ((num_course + v < 6) && (num_course + v > 0)) {
		num_course += v;
	}
	else {
		throw invalid_argument("����� �� ������� �������� ����� ��� ��������!");
	}
}

void Student::sub_crs(const int& v) {
	if ((num_course - v < 6) && (num_course - v > 0)) {				// ������� ����, ���� �� ������� �� �������
		num_course -= v;
	}
	else {
		throw invalid_argument("����� �� ������� �������� ����� ��� ���������!");
	}
}
string Student::get_string() const {		// ������������ ������ � ������� ����� �����

	string full = "���: " + Human::get_name() + "\n"
		+ "�������: " + Human::get_surname() + "\n"
		+ "��������: " + Human::get_patronymic() + "\n"
		+ "�������: " + to_string(Human::get_age()) + "\n"
		+ "���: " + to_string(Human::get_weight()) + "\n"
		+ "����� �������: " + to_string(num_record) + "\n"
		+ "����� �����: " + to_string(num_course) + "\n"
		+ "������: " + group + "\n"
		+ "������: " + status;
	return full;
}