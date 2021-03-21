#pragma once

#include <vector>

#include "show.h"

using namespace std;

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

//TODO Написать реализацию по выводу информации о менеджерах
void ShowManager(vector<Manager> managers)
{
    
}

//TODO Упростить функцию
void InputStudent(vector<Student>& students)
{ 
    Student temp;
    char temp_sex, temp_faculty;
    cout << "Ввод данных о студенте" << endl;
    cout << "Введите имя - "; cin >> temp.personal_info.name;
    cout << "Введите возраст - "; cin >> temp.personal_info.age;
    cout << "Введите пол: M - мужской, F - женский"; cin >> temp_sex;
    if (temp_sex == 'M' || temp_sex == 'm') {
        temp.personal_info.sex = Sex::Male;
    } else if (temp_sex == 'F' || temp_sex == 'f') {
        temp.personal_info.sex = Sex::Female;
    } else {
        temp.personal_info.sex = Sex::Unknown;
    }
    cout << "Введите рейтинг - "; cin >> temp.rating;
    cout << "Введите факультет: S - РПО, D - КГиД";
    cin >> temp_faculty;
    if (temp_faculty == 'S' || temp_faculty == 's') {
        temp.faculty = Faculty::SoftDev;
    }
    else if (temp_faculty == 'D' || temp_faculty == 'd') {
        temp.faculty = Faculty::Design;
    } else { temp.faculty = Faculty::NoneStudent; }
    students.push_back(temp);
}

//TODO Написать реализацию по вводу информации о преподавателях
void InputTeacher(vector<Teacher>& teachers) {
    Teacher temp;
    char temp_sex, temp_subject;
    cout << "Ввод данных о преподавателе" << endl;
    cout << "Введите имя - "; cin >> temp.personal_info.name;
    cout << "Введите возраст - "; cin >> temp.personal_info.age;
    cout << "Введите пол: M - мужской, F - женский"; cin >> temp_sex;
    if (temp_sex == 'M' || temp_sex == 'm') {
        temp.personal_info.sex = Sex::Male;
    }
    else if (temp_sex == 'F' || temp_sex == 'f') {
        temp.personal_info.sex = Sex::Female;
    }
    else {
        temp.personal_info.sex = Sex::Unknown;
    }
    cout << "Введите предмет: G - Компьютерная графика, D - РПО";
    cin >> temp_subject;
    if (temp_subject == 'G' || temp_subject == 'g') {
        temp.subject = Subject::Graphics;
    }
    else if (temp_subject == 'D' || temp_subject == 'd') {
        temp.subject = Subject::Development;
    } else { temp.subject = Subject::NoneSubject; }
    teachers.push_back(temp);
}

//TODO Написать реализацию по вводу информации о менеджерах
void InputManager(vector<Manager>& managers) {

}