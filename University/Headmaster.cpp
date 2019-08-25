#include "pch.h"
#include <string>
#include <cstdio>
#include <iostream>
#include "Headmaster.h"
#include "Human.h"
#include "Student.h"
#include "Professor.h"



Headmaster::Headmaster ( std::string set_name, int set_age, std::string set_color, std::string set_job, std::string set_habit, std::string set_researchField, double set_salary) 
   
{
    name = set_name;
    age = set_age;
    color = set_color;
    job = set_job;
    habit = set_habit;
    researchField = set_researchField;
    salary = set_salary;
}


Headmaster::~Headmaster ()
{

}

double Headmaster::totalSalary ( std::vector<Professor> gs ) 
{
    double sum = 0;
    for ( int n = 0; n < gs.size(); n++) 
    {
        sum = sum + gs[n].Get_salary();
    }
    return sum;
}

void Headmaster::addStudent ( std::vector<Student> &sv )
{

    // khai bao bien se dung

    std::string name_st;
    int age_st;
    std::string color_st;
    std::string job_st;
    std::string habit_st;
    std::string researchField_st;

    std::cout << "\nEnter a student you want to add" << std::endl;
    std::cout<<"\nEnter student's name: " << std::endl;
    std::cin >> name_st;

    std::cout << "\nEnter student's age: " << std::endl;
    std::cin >> age_st;

    std::cout << "\nEnter student's color: " << std::endl;
    std::cin >> color;

    std::cout << "\nEnter student's job: " << std::endl;
    std::cin >> job_st;

    std::cout << "\nEnter student's habit: " << std::endl;
    std::cin >> habit_st;

    std::cout << "\nEnter student's researching field: " << std::endl;
    std::cin >> researchField_st;

    sv.push_back ( Student ( name_st, age_st, color, job_st, habit_st, researchField_st ) );

    std::cout << "\nI am " << name_st.c_str () << ". I am " << age_st << ".I am working as a " << job_st.c_str () << ". I am interested in " << habit_st.c_str () << ". My researching field is " << researchField_st.c_str () << std::endl;

}


void Headmaster::removeStudent ( std::vector<Student> &stv )
{
    int position = -1;
    // delete student by name

    // input a name



    

    // if not, we print, there is not student with that name

    std::string name_stv;
    std::cout << "\nEnter a student's name you want to remove" << std::endl;
    std::cin >> name_stv;

    // find that name
    for ( int j = 0; j < stv.size (); j++ )
    {
        if ( name_stv == stv[j].get_name () )
        {
            position = j;
            break;
        }
    }

    // if that name exist in the student list, we delete
    if ( position > -1)
    {
        stv.erase ( stv.begin () + position);
        std::cout << "\nA student was deleted";
    
    }else // position = -1, it means that this student does not exist
    {
        std::cout << "\nThe student you want to remove does not exist";
    }


}

void Headmaster::displayStudent ( std::vector<Student> st )
{
    for ( int k = 0; k < st.size (); k++ )
    {
        std::cout << "\nI am " << st[k].get_name () << ". I am " << st[k].get_age () << ".I am working as a " << st[k].get_job () << ". I am interested in " << st[k].get_habit () << ". My researching field is " << st[k].get_researchField () << std::endl;

    }

}




 