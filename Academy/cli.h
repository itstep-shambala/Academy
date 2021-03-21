#pragma once

#include <vector>

#include "show.h"

using namespace std;

//__________Вывод данных для меню__________

void ShowStudents(vector<Student> students)
{
    for (auto student : students) {
        ShowStudent(student);
    }
}

void ShowTeachers(vector<Teacher> teachers)
{
    for (auto teacher : teachers) {
        ShowTeacher(teacher);
    }
}

void ShowManager(vector<Manager> managers)
{
    for (auto manager : managers) {
        ShowManager(manager);
    }
}

//__________Ввод данных для меню__________

//TODO Упростить функцию
void InputStudent(vector<Student>& students)
{ 
    Student temp;
    char temp_sex, temp_faculty;
    cout << "Ввод данных о студенте" << endl;
    cout << "Введите имя - "; cin >> temp.personal_info.name;
    cout << "Введите возраст - "; cin >> temp.personal_info.age;
    cout << "Введите пол: M - мужской, F - женский" << endl;
    cin >> temp_sex;
    if (temp_sex == 'M' || temp_sex == 'm') {
        temp.personal_info.sex = Sex::Male;
    } else if (temp_sex == 'F' || temp_sex == 'f') {
        temp.personal_info.sex = Sex::Female;
    } else {
        temp.personal_info.sex = Sex::Unknown;
    }
    cout << "Введите рейтинг - "; cin >> temp.rating;
    cout << "Введите факультет: S - РПО, D - КГиД" << endl;
    cin >> temp_faculty;
    if (temp_faculty == 'S' || temp_faculty == 's') {
        temp.faculty = Faculty::SoftDev;
    }
    else if (temp_faculty == 'D' || temp_faculty == 'd') {
        temp.faculty = Faculty::Design;
    } else { temp.faculty = Faculty::NoneStudent; }
    students.push_back(temp);
}

//TODO Упростить функцию
void InputTeacher(vector<Teacher>& teachers) {
    Teacher temp;
    char temp_sex, temp_subject;
    cout << "Ввод данных о преподавателе" << endl;
    cout << "Введите имя - "; cin >> temp.personal_info.name;
    cout << "Введите возраст - "; cin >> temp.personal_info.age;
    cout << "Введите пол: M - мужской, F - женский" << endl;
    cin >> temp_sex;
    if (temp_sex == 'M' || temp_sex == 'm') {
        temp.personal_info.sex = Sex::Male;
    }
    else if (temp_sex == 'F' || temp_sex == 'f') {
        temp.personal_info.sex = Sex::Female;
    }
    else {
        temp.personal_info.sex = Sex::Unknown;
    }
    cout << "Введите предмет: G - Компьютерная графика, D - РПО" << endl;
    cin >> temp_subject; //ToDO Не выводит должность
    if (temp_subject == 'G' || temp_subject == 'g') {
        temp.subject = Subject::Graphics;
    }
    else if (temp_subject == 'D' || temp_subject == 'd') {
        temp.subject = Subject::Development;
    } else { temp.subject = Subject::NoneSubject; }
    teachers.push_back(temp);
}

//TODO Упростить функцию
void InputManager(vector<Manager>& managers) {
    Manager temp;
    char temp_sex, temp_position;
    cout << "Ввод данных о менеджере" << endl;
    cout << "Введите имя - "; cin >> temp.personal_info.name;
    cout << "Введите возраст - "; cin >> temp.personal_info.age;
    cout << "Введите пол: M - мужской, F - женский" << endl;
    cin >> temp_sex;
    if (temp_sex == 'M' || temp_sex == 'm') {
        temp.personal_info.sex = Sex::Male;
    }
    else if (temp_sex == 'F' || temp_sex == 'f') {
        temp.personal_info.sex = Sex::Female;
    }
    else {
        temp.personal_info.sex = Sex::Unknown;
    }
    cout << "Введите должность: D - Директор, S - Продажи" << endl;
    cin >> temp_position; // ToDo Не выводит позицию
    if (temp_position == 'D' || temp_position == 'd') {
        temp.position = Position::Director;
    }
    else if (temp_position == 'S' || temp_position == 's') {
        temp.position = Position::Sales;
    }
    else { temp.position = Position::NonePosition; }
    managers.push_back(temp);
}