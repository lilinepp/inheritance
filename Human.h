// Выполнила Мясоедова Алина Вмк-20
#pragma once
#include <iostream>
#include <string>
using namespace std;

class Human {
private:
	/// <summary>
	/// имя человека
	/// </summary>
	string name;
	/// <summary>
	/// фамилия человека
	/// </summary>
	string surname;
	/// <summary>
	/// отчество человека
	/// </summary>
	string patronymic;		
	/// <summary>
	/// возраст человека
	/// </summary>
	int age;	
                          
public:
	// конструктор по умолчанию
	Human();								
	// констуктор с параметрами
	Human(const string& _name, const string& _surname, const string& _patronymic, const int _age);		
	
	void set_name(const string& _name);	// ввод имени
	void set_surname(const string& _surname);	// ввод фамилии
	void set_patronymic(const string& _patronymic);	// ввод отчества
	void set_fuln(const string& _name, const string& _surname, const string& _patronymic);		// ввод инициалов
	void set_age(const int _age);				// ввод возраста
	string get_name() const;			// возврат имени
	string get_surname() const;			// возврат фамилии
	string get_patronymic() const;			// возврат отчества
	int get_age() const;					// возврат возраста
	void add_age(const int _add_age);				// увеличение возраста
	void sub_age(const int _sub_age);				// уменьшение возраста


virtual string tostring() const;	// возврат строки с данными

	//virtual-нужен для переопределения(изменения)метода базового класса при наследовании и использовать его с изменениями в наследнике 

};
