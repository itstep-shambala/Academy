#pragma once

#include "Person.h"

enum Position { Director, Sales, NoPosition };

string PositionToString(Position position) {
	switch(position) {
		case Director:
			return "Директор";
		case Sales:
			return "Менеджер по продажам";
		case NoPosition:
			return "не опеределено";
	}
}

class Manager
{
public:
	Person personal_info;
	Position position;
};