// ��������� ��������� ����� ���-20
#pragma once
#include <iostream>
#include <string>
#include "Human.h"
using namespace std;

class Lecturer : public Human { //����� ����������� �� ������ Human
private:
	/// <summary>
	/// ������� �������
	/// </summary>
	string academic_degree;					
	/// <summary>
	///  �������� ������������
	/// </summary>
	string name_university;					
	/// <summary>
	/// ����� ���������
	/// </summary>
	int num_hall;							
public:
	Lecturer();
	Lecturer(const string& _name, const string& _surname, const string& _patronymic,
	const int& _age,const int& _weight, const string& _name_u, const int& _number);

	void set_univ(const string& _name_u);			// ���� ������������
	void set_hall(const int& _number);				// ���� ������ ���������
	void acd_dgr_up();								// ���������� ����� ������� �������
	string get_acd_dgr() const;				// ������� ������ �������
	string get_univ() const;					// ������� ������������
	int get_hall() const;							// ������� ������ ���������
	string get_string() const;					// ������� ������ � �������
};