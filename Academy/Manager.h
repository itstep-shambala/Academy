#pragma once

#include "Person.h"

enum Position { Director, Sales };

class Manager
{
public:
	Person personal_info;
	Position position;
};