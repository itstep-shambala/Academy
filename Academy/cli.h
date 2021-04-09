#pragma once

#include <vector>
#include <fstream>

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

void ShowManagers(vector<Manager> managers)
{
    for (auto manager : managers) {
        ShowManager(manager);
    }
}


void InputStudent(vector<Student>& students, string& message)
{ //TODO Упростить функцию
    Student temp;
    char temp_sex, temp_faculty;
    cout << "Ввод данных о студенте" << endl;
    cout << "Введите имя - "; cin >> temp.personal_info.name;
    cout << "Введите возраст - "; cin >> temp.personal_info.age;
    cout << "Введите пол: M - мужской, F - женский "; cin >> temp_sex;
    if (temp_sex == 'M') {
        temp.personal_info.sex = Sex::Male;
    } else if (temp_sex == 'F') {
        temp.personal_info.sex = Sex::Female;
    } else {
        temp.personal_info.sex = Sex::Unknown;
    }
    cout << "Введите рейтинг - "; cin >> temp.rating;
    cout << "Введите факультет: S - РПО, D - КГиД ";
    cin >> temp_faculty;
    if (temp_faculty == 'S' || temp_faculty == 's') {
        temp.faculty = Faculty::SoftDev;
    } else if (temp_faculty == 'D' || temp_faculty == 'd') {
        temp.faculty = Faculty::Design;
    } else {
        temp.faculty = Faculty::NoFaculty;
    }
    students.push_back(temp);
    message = temp.personal_info.name + ";" + to_string(temp.personal_info.age) + ";" +  to_string(temp.rating) + ";" + FacultyToString(temp.faculty);
}

void InputTeacher(vector<Teacher>& teachers, string& message)
{   //TODO Упростить функцию
    Teacher temp;
    char temp_sex, temp_subject;
    cout << "Ввод данных о перподавателе" << endl;
    cout << "Введите имя - "; cin >> temp.personal_info.name;
    cout << "Введите возраст - "; cin >> temp.personal_info.age;
    cout << "Введите пол: M - мужской, F - женский "; cin >> temp_sex;
    if (temp_sex == 'M') {
        temp.personal_info.sex = Sex::Male;
    }
    else if (temp_sex == 'F') {
        temp.personal_info.sex = Sex::Female;
    }
    else {
        temp.personal_info.sex = Sex::Unknown;
    }
    cout << "Введите кафедру: D - РПО, G - КГиД ";
    cin >> temp_subject;
    if (temp_subject == 'G' || temp_subject == 'g') {
        temp.subject = Subject::Graphics;
    }
    else if (temp_subject == 'D' || temp_subject == 'd') {
        temp.subject = Subject::Development;
    }
    else {
        temp.subject = Subject::NoSubject;
    }
    teachers.push_back(temp);
    message = temp.personal_info.name + ";" + to_string(temp.personal_info.age) + ";" + SubjectToString(temp.subject);
}

void InputManager(vector<Manager>& managers, string& message)
{   //TODO Упростить функцию
    Manager temp;
    char temp_sex, temp_position;
    cout << "Ввод данных о менеджере" << endl;
    cout << "Введите имя - "; cin >> temp.personal_info.name;
    cout << "Введите возраст - "; cin >> temp.personal_info.age;
    cout << "Введите пол: M - мужской, F - женский "; cin >> temp_sex;
    if (temp_sex == 'M') {
        temp.personal_info.sex = Sex::Male;
    }
    else if (temp_sex == 'F') {
        temp.personal_info.sex = Sex::Female;
    }
    else {
        temp.personal_info.sex = Sex::Unknown;
    }
    cout << "Введите должность: D - Директор, S - Менеджер по продажам ";
    cin >> temp_position;
    if (temp_position == 'S' || temp_position == 's') {
        temp.position = Position::Sales;
    }
    else if (temp_position == 'D' || temp_position == 'd') {
        temp.position = Position::Director;
    }
    else {
        temp.position = Position::NoPosition;
    }
    managers.push_back(temp);
    message = temp.personal_info.name + ";" + to_string(temp.personal_info.age) + ";" + PositionToString(temp.position);
}

bool WriteToFile(string path, string message)
{
    ofstream file;
    file.open(path, ios_base::app);

    if (file.is_open()) {
        file << message << endl;
        file.close();
        return true;
    }
    else {
        file.close();
        return false;
    }
}