#pragma once

#include "Person.h"

enum Subject { Graphics, Development, NoneSubject };
string SubjectToString(Subject subject)
{
    switch (subject) {
        case Graphics:
            return "Компьютерная графика";
        case Development:
            return "РПО";
        case NoneSubject:
            return "неуказано";
    }
}

class Teacher {
public:
	Person personal_info;
	Subject subject;
};