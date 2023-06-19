// Выполнила Мясоедова Алина Вмк-20
#pragma once
#include <iostream>
#include <string>
#include "Human.h"
using namespace std;

class Student : public Human {					// класс Student с наследованием от класса Human 
private:
	/// <summary>
	///  номер зачётной книжки студента
	/// </summary>
	int num_record;	
	/// <summary>
	/// номер курса студента
	/// </summary>
	int num_course;	
	/// <summary>
	/// название группы студента
	/// </summary>
	string group;						
	/// <summary>
	/// текущий статус студента
	/// </summary>
	string status;	
	static const  int min_crs; // переменная,для того,чтобы задать минимальный курс.
	static const  int max_crs; // переменная,для того,чтобы задать максимальный курс
	static const  int min_rec; //переменная,для того,чтобы задатьминимальное шестизначное значение номера зачетки
	static const  int max_rec;  //переменная,для того,чтобы задать максимальное шестизначное значение номера зачетки

public:
	Student();

	Student(const string& _name, const string& _surname,const string& _patronymic, 
		int _age, int _num_rec, int _num_crs, 
		const string& _group, const string& _status);

	void set_num_rec(int _num_rec);					// ввод номера зачётной книжки
	void set_num_crs(int _num_crs);					// ввод номера курса
	void set_nums(int r, int c);			// ввод номеров зачётки и курса
	void set_grp(const string& _group);					// ввод названия группы
	void set_stat(const string& _status);				// ввод текущего статуса
	int get_num_rec() const;							// возврат номера зачётки
	int get_num_crs() const;							// возврат номера курса
	string get_grp() const;						// возврат названия группы
	string get_stat() const;						// возврат текущего статуса
	void add_crs(int v);							// прибавление курса
	void sub_crs(int v);							// уменьшение курса
	string tostring() override;						// возврат строки с данными
}; 
