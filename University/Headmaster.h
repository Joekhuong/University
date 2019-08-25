#pragma once
#include <string>
#include <cstdio>
#include <iostream>
#include <vector>
#include "Human.h"
#include "Student.h"
#include "Professor.h"

class Headmaster:Human
{
public:
    std::vector<Student> st;
    std::vector<Professor> prof;

    Headmaster ( std::string set_name, int set_age, std::string set_color, std::string set_job, std::string set_habit, std::string set_researchField, double set_salary );
    ~Headmaster ();

    double totalSalary ( std::vector<Professor> gs );

    void addStudent ( std::vector<Student> &sv );

    void displayStudent ( std::vector<Student> st );

    void removeStudent ( std::vector<Student> &stv );
};



