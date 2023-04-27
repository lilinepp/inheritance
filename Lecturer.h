// ¬ыполнила ћ€соедова јлина ¬мк-20
#pragma once
#include <iostream>
#include <string>
#include "Human.h"
using namespace std;

class Lecturer : public Human { //класс унаследован от класса Human
private:
	/// <summary>
	/// учебна€ степень
	/// </summary>
	string academic_degree;					
	/// <summary>
	///  название университета
	/// </summary>
	string name_university;					
	/// <summary>
	/// номер аудитории
	/// </summary>
	int num_hall;							
public:
	Lecturer();
	Lecturer(const string& _name, const string& _surname, const string& _patronymic,
	const int& _age,const int& _weight, const string& _name_u, const int& _number);

	void set_univ(const string& _name_u);			// ввод университета
	void set_hall(const int& _number);				// ввод номера аудитории
	void acd_dgr_up();								// присвоение новой учебной степени
	string get_acd_dgr() const;				// возврат учЄной степени
	string get_univ() const;					// возврат университета
	int get_hall() const;							// возврат номера аудитории
	string get_string() const;					// возврат строки с данными
};