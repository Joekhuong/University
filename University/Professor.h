#pragma once
#include <string>
#include <cstdio>
#include <iostream>
#include "Human.h"
#include "Student.h"
#include <vector>

class Professor: Human
{
public:
    Professor ( std::string set_name, int set_age, std::string set_color, std::string set_job, std::string set_habit, std::string set_researchField, double set_salary );
    Professor ();
    ~Professor ();



    double Get_salary ();

    std::vector<Student> find_ResearchField ( std::vector<Student> find);
   
};

