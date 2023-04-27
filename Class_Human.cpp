// ��������� ��������� ����� ���-20
#include <iostream>
#include "Human.h"
#include "Student.h"
#include "Lecturer.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");                                                                               // ������� �����������    
    try {                                                                                           // ����� ����������:
        Human entrant("����", "������", "��������", 18,70);     
        //cout << "����������:\n" << entrant.get_string() << endl << endl; 
        Student freshman("����", "�������", "���������", 19, 60, 200000, 2,"���-20", "���������");       // � ������ student
        Lecturer teacher("����", "������", "��������", 20,70, "�����", 203);                          // � ������ lecturer
      
         
    }
    catch (invalid_argument err)                                                                         // ���� ������� ����������:
    {
        cout << "���������� ������: " << err.what() << endl;                                        // ����� ����������                                                                           // �������� �������
        return 0;                                                                                   // �������� ���������
    }
   

    
   Human* entrant = new Human("����", "������", "��������", 18,70);
   Student* freshman = new Student("����", "�������", "���������", 19, 60,200000, 2, "���-20", "���������");
   Lecturer* teacher = new Lecturer("����", "������", "��������",20, 70, "�����", 203);

    freshman->add_age(0);                                                     // �������� ����������� � ��������
    entrant->sub_age(0);                                                     // �������� ��������� �� ��������

    entrant->add_weight(0);
    entrant->sub_weight(0);

    freshman->add_crs(2);                                                         // �������� ���������� �����
    freshman->sub_crs(1);                                                         // �������� ���������� �����

    teacher->acd_dgr_up();                                                   // �������� ���������� ������ ������� �� ���������
    teacher->acd_dgr_up();                                                   // �������� ���������� ������ ������� �� �������

    cout << "����������:\n" << entrant->get_string() << endl << endl;          // ����� ������������� ������� Human
    cout << "C������:\n" << freshman->get_string() << endl << endl;          // ����� ������������� ������� Student
    cout << "�������������:\n" << teacher->get_string() << endl << endl;                     // ����� ������������� ������� Lecturer

   delete entrant;                                                          // ������� ������ �� Human
   delete freshman;                                                          // ������� ������ �� Student
   delete teacher;                                                              // ������� ������ �� Lecturer

  
}