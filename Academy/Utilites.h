#pragma once

#include <iostream>
#include <vector>
#include <fstream>

#include "Student.h"
#include "Teacher.h"
#include "Manager.h"

#include "cli.h"

string choosePath(char select, string path) {
    if (select == 1 || select == 4) {
        path = "01_Students.csv";
        return path;
    }
    else if (select == 2 || select == 5)
    {
        path = "02_Teachers.csv";
        return path;
    }
    else if (select == 3 || select == 6)
    {
        path = "03_Managers.csv";
        return path;
    }
}

bool WriteToFile(string path, string message)
{
    ofstream file;
    file.open(path, ios_base::trunc);

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