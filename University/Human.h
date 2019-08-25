#pragma once
#include <string>
#include <cstdio>
#include <iostream>

class Human
{
public:
    Human ();
    ~Human ();

    std::string name;
    int age;
    std::string color;
    std::string job;

    void set_value ();

    std::string Get_Habit ();
    std::string Get_researchField ();
    double Get_salary ();


 protected:
    std::string habit;
    std::string researchField;
    double salary;

};

