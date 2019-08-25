#include "pch.h"
#include "Student.h"
#include "Human.h"
#include <cstdio>
#include <iostream>

using namespace std;


Student::Student ( std::string set_name, int set_age, std::string set_color, std::string set_job, std::string set_habit, std::string set_researchField )
{
    name = set_name;
    age = set_age;
    color = set_color;
    job = set_job;
    habit = set_habit;
    researchField = set_researchField;
}

Student::Student ()
{
}


Student::~Student ()
{
}

void Student::Show_Student_List ()
{
    cout << "\nI am " << name.c_str () << ". I am " << age << ".I am working as a " << job.c_str () << ". I am interested in " << habit.c_str () << ". My researching field is " << researchField.c_str ()<<endl;

}

std::string Student::get_name ()
{
    return name;
}

int Student::get_age ()
{
    return age;
}

std::string Student::get_job ()
{
    return job;
}

std::string Student::get_habit ()
{
    return habit;
}

std::string Student::get_researchField ()
{
    return researchField;
}