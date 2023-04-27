// Выполнила Мясоедова Алина Вмк-20
#include <iostream>
#include "Human.h"
#include "Student.h"
#include "Lecturer.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");                                                                               // русская локализация    
    try {                                                                                           // ловим исключения:
        Human entrant("Петр", "Петров", "Петрович", 18,70);     
        //cout << "Абитуриент:\n" << entrant.get_string() << endl << endl; 
        Student freshman("Сидр", "Сидоров", "Сидорович", 19, 60, 200000, 2,"ВМК-20", "Обучается");       // в классе student
        Lecturer teacher("Иван", "Иванов", "Иванович", 20,70, "ЗабГУ", 203);                          // в классе lecturer
      
         
    }
    catch (invalid_argument err)                                                                         // если поймали исключение:
    {
        cout << "Обнаружена ошибка: " << err.what() << endl;                                        // вывод исключения                                                                           // фиксация консоли
        return 0;                                                                                   // закрытие программы
    }
   

    
   Human* entrant = new Human("Петр", "Петров", "Петрович", 18,70);
   Student* freshman = new Student("Сидр", "Сидоров", "Сидорович", 19, 60,200000, 2, "ВМК-20", "Обучается");
   Lecturer* teacher = new Lecturer("Иван", "Иванов", "Иванович",20, 70, "ЗабГУ", 203);

    freshman->add_age(0);                                                     // проверка прибавления к возрасту
    entrant->sub_age(0);                                                     // проверка вычитания из возраста

    entrant->add_weight(0);
    entrant->sub_weight(0);

    freshman->add_crs(2);                                                         // проверка увеличения курса
    freshman->sub_crs(1);                                                         // проверка уменьшения курса

    teacher->acd_dgr_up();                                                   // проверка увеличения учёной степени до кандидата
    teacher->acd_dgr_up();                                                   // проверка увеличения учёной степени до доктора

    cout << "Абитуриент:\n" << entrant->get_string() << endl << endl;          // вывод получившегося объекта Human
    cout << "Cтудент:\n" << freshman->get_string() << endl << endl;          // вывод получившегося объекта Student
    cout << "Преподаватель:\n" << teacher->get_string() << endl << endl;                     // вывод получившегося объекта Lecturer

   delete entrant;                                                          // очистка памяти от Human
   delete freshman;                                                          // очистка памяти от Student
   delete teacher;                                                              // очистка памяти от Lecturer

  
}