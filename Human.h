// ��������� ��������� ����� ���-20
#pragma once
#include <iostream>
#include <string>
using namespace std;

class Human {
private:
	/// <summary>
	/// ��� ��������
	/// </summary>
	string name;
	/// <summary>
	/// ������� ��������
	/// </summary>
	string surname;
	/// <summary>
	/// �������� ��������
	/// </summary>
	string patronymic;		
	/// <summary>
	/// ������� ��������
	/// </summary>
	int age;	
	/// <summary>
	/// ��� ��������
	/// </summary>
	int weight;                             
public:
	// ����������� �� ���������
	Human();								
	// ���������� � �����������
	Human(const string& _name, const string& _surname, const string& _patronymic, const int& _age, const int& _weight);		
	
	void set_name(const string& _name);	// ���� �����
	void set_surname(const string& _surname);	// ���� �������
	void set_patronymic(const string& _patronymic);	// ���� ��������
	void set_fuln(const string& _name, const string& _surname, const string& _patronymic);		// ���� ���������
	void set_age(const int& _age);				// ���� ��������
	void set_weight(const int& _weight);          //���� ����
	string get_name() const;			// ������� �����
	string get_surname() const;			// ������� �������
	string get_patronymic() const;			// ������� ��������
	int get_age() const;					// ������� ��������
	int get_weight() const;                // ������� ����
	void add_age(const int& _add_age);				// ���������� ��������
	void sub_age(const int& _sub_age);				// ���������� ��������
	void add_weight(const int& _add_weight);          // ���������� ����
	void sub_weight(const int& _sub_weight);          //���������� ����

   virtual	string get_string() const;	// ������� ������ � �������

	

};