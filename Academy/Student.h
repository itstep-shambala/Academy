#pragma once

#include "Person.h"

enum Faculty { SoftDev, Design, None };
string FacultyToString(Faculty faculty)
{
    switch (faculty) {
        case SoftDev:
            return "РПО";
        case Design:
            return "КГиД";
        case None:
            return "не выбран";
    }
}

class Student
{
public:
	Person personal_info;
	double rating;
	Faculty faculty;
};