#include <iostream>
#include <vector>
#include <string>

#include "Student.h"
#include "Teacher.h"
#include "Manager.h"

#include "menu.h"
#include "cli.h"

using namespace std;

int main()
{
system("chcp 65001");

    vector<Student> students;
    vector<Teacher> teachers;
    vector<Manager> managers;

    bool exit = false;
    char select;

    string path, message;

    do {
        ShowMenu();
        cout << "Введите номер: ";
        cin >> select;

        switch (select) {
            case '1': // 1. Добавить студента
               {path = "01_Students.csv";
               InputStudent(students, message);
               bool isWrite = WriteToFile(path, message);
               if (isWrite) {
                   cout << "Recording finished: " << path << endl;
               }
               else {
                   cerr << "Recording error: " << path << endl;
               }
               break; }
            case '2': // 2. Добавить преподавателя
                {path = "02_Teachers.csv";
                InputTeacher(teachers, message);
                bool isWrite = WriteToFile(path, message);
                if (isWrite) {
                    cout << "Recording finished: " << path << endl;
                }
                else {
                    cerr << "Recording error: " << path << endl;
                }
                break; }
            case '3': // 3. Добавить менеджера
                {path = "03_Managers.csv";
                InputManager(managers, message);
                bool isWrite = WriteToFile(path, message);
                if (isWrite) {
                    cout << "Recording finished: " << path << endl;
                }
                else {
                    cerr << "Recording error: " << path << endl;
                }
                break; }
            case '4': // 4. Показать всех студентов
                ShowStudents(students);
                break;
            case '5': // 5. Показать всех преподавателей
                ShowTeachers(teachers);
                break;
            case '6': // 6. Показать всех менеджеров
                ShowManagers(managers);
                break;
            case '0': // 0. Выход
                exit = true;
                break;
            default:
                break;
        }
    } while (!exit);

    cout << "До свидания...";

	return 0;
}