#pragma once

#include "Person.h"

enum Position { Director, Sales, NonePosition
};
string PositionToString(Position position)
{
    switch (position) {
    case Director:
        return "Директор";
    case Sales:
        return "Продажи";
    case NonePosition:
        return "неуказано";
    }
}

class Manager {
public:
	Person personal_info;
	Position position;
};