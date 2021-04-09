# CMakeList.txt: проект CMake для Academy; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Добавьте источник в исполняемый файл этого проекта.
add_executable (Academy "Academy.cpp"  "Person.h" "Student.h" "Teacher.h" "Manager.h" menu.h cli.h show.h )
