#pragma once

#include "Person.h"

enum Subject { Graphics, Development, NoSubject };

string SubjectToString(Subject subject)
{
	switch (subject) {
		case Graphics:
			return " √иƒ";
		case Development:
			return "–ѕќ";
		case NoSubject:
			return "не выбрано";
	}
}

class Teacher
{
public:
	Person personal_info;
	Subject subject;
};