// Выполнила Мясоедова Алина Вмк-20
#pragma once
#include <iostream>
#include <string>
#include "Human.h"
using namespace std;

class Lecturer : public Human { //строим новый клас Lecturer на основе класса Human
private:
	/// <summary>
	/// учебная степень
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
	
	static const string candidate_sciences; //константные переменные для хранения данных о научной степени
	static const string doctor_sciences;
	static const string no_sciences;

public:
	Lecturer();
	Lecturer(const string& _name, const string& _surname, const string& _patronymic,
	int _age,const string& _name_u,  int _number);

	void set_univ(const string& _name_u);			// ввод университета
	void set_hall( int _number);				// ввод номера аудитории
	void acd_dgr_up();								// присвоение новой учебной степени
	string get_acd_dgr() const;				// возврат учёной степени
    void acd_dgr_down();                          //убавление учетной степени
	string get_univ() const;					// возврат университета
	int get_hall() const;							// возврат номера аудитории
	string tostring() override;					// возврат строки с данными
};
//override-спецификатор,кот.нужен для того,чтобы компилятор проконтролировал 
//правильную работу аналогичного метода в базовом классе и убедился,что метод базового класса виртуальный 
//Static - это ключевое слово в C++, используемое для придания элементу особых характеристик.
//Для статических элементов выделение памяти происходит только один раз и существуют эти элементы до завершения программы. 
