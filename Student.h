// ��������� ��������� ����� ���-20
#pragma once
#include <iostream>
#include <string>
#include "Human.h"
using namespace std;

class Student : public Human {					// ����� Student � ������������� �� ������ Human 
private:
	/// <summary>
	///  ����� �������� ������ ��������
	/// </summary>
	int num_record;	
	/// <summary>
	/// ����� ����� ��������
	/// </summary>
	int num_course;	
	/// <summary>
	/// �������� ������ ��������
	/// </summary>
	string group;						
	/// <summary>
	/// ������� ������ ��������
	/// </summary>
	string status;							
public:
	Student();
	Student(const string&  _name, const string& _surname, const string& _patronymic, 
		const int& _age, const int& _weight, const int& _num_rec, const int& _num_crs, 
		const string& _group, const string& _status);

	void set_num_rec(const int& _num_rec);					// ���� ������ �������� ������
	void set_num_crs(const int& _num_crs);					// ���� ������ �����
	void set_nums(const int& r, const int& c);			// ���� ������� ������� � �����
	void set_grp(const string& _group);					// ���� �������� ������
	void set_stat(const string& _status);				// ���� �������� �������
	int get_num_rec() const;							// ������� ������ �������
	int get_num_crs() const;							// ������� ������ �����
	string get_grp() const;						// ������� �������� ������
	string get_stat() const;						// ������� �������� �������
	void add_crs(const int& v);							// ����������� �����
	void sub_crs(const int& v);							// ���������� �����
	string get_string() const;						// ������� ������ � �������
}; 