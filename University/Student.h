#pragma once
#include <string>
#include <cstdio>
#include <iostream>
#include "Human.h"

class Student: Human
{
public:
    Student ( std::string set_name, int set_age, std::string set_color, std::string set_job, std::string set_habit, std::string set_researchField);
    Student ();
    ~Student ();

    void Show_Student_List ( );
    std::string get_name ();
    int get_age ();
    std::string get_job ();
    std::string get_habit ();
    std::string get_researchField ();
  
};

