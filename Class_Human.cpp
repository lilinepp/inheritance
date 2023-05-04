// Выполнила Мясоедова Алина Вмк-20
#include <iostream>
#include "Human.h"
#include "Student.h"
#include "Lecturer.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");                                                                               // русская локализация    
    try {                                                                                           // ловим исключения:
        Human entrant("Петр", "Петров", "Петрович", 18);     
        //cout << "Абитуриент:\n" << entrant.tostring() << endl << endl; 
        Student freshman("Сидр", "Сидоров", "Сидорович", 19, 200000, 2,"ВМК-20", "Обучается");       // в классе student
        Lecturer teacher("Иван", "Иванов", "Иванович", 20, "ЗабГУ", 203);                          // в классе lecturer
      
         
    }
    catch (invalid_argument err)                                                                         // если поймали исключение:
    {
        cout << "Обнаружена ошибка: " << err.what() << endl;                                        // вывод исключения                                                                           // фиксация консоли
        return 0;                                                                                   // закрытие программы
    }
   


    
//   Human* entrant = new Human("Петр", "Петров", "Петрович", 18);// динамическое создание
  // Student* freshman = new Student("Сидр", "Сидоров", "Сидорович", 19,200000, 6, "ВМК-20", "Обучается");
   //Lecturer* teacher = new Lecturer("Иван", "Иванов", "Иванович",20, "ЗабГУ", 203);

  // freshman->add_age(0);                                                     // проверка прибавления к возрасту
   // entrant->sub_age(0);                                                     // проверка вычитания из возраста


    //freshman->add_crs(1);                                                         // проверка увеличения курса
   // freshman->sub_crs(1);                                                         // проверка уменьшения курса

   // teacher->acd_dgr_up();                                                   // проверка увеличения учёной степени до кандидата
  //  teacher->acd_dgr_up();                                                   // проверка увеличения учёной степени до доктора

   // teacher->acd_dgr_down();


    //cout << "Абитуриент:\n" << entrant->tostring() << endl << endl;          // вывод получившегося объекта Human
    //cout << "Cтудент:\n" << freshman->tostring() << endl << endl;          // вывод получившегося объекта Student
    //cout << "Преподаватель:\n" << teacher->tostring() << endl << endl;                     // вывод получившегося объекта Lecturer

   //delete entrant;                                                          // очистка памяти от Human
   //delete freshman;                                                          // очистка памяти от Student
  // delete teacher;                                                              // очистка памяти от Lecturer

  //демонстрация работы виртуального метода
   
    Lecturer dmnstr("Мария", "Иванова", "Алексеевна", 20, "НГУ", 656);//создали объект наследуемого класса
   Human* indicator = &dmnstr;//присвоили базовому классу указатель на объект наследника
   cout << indicator->tostring()<<endl<<endl;//с помощью виртуального метода базового класса вывели объект наследуемого класса 

    

}
