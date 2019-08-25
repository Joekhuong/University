#include "pch.h"
#include <string>
#include <cstdio>
#include <iostream>
#include "Professor.h"
#include "Human.h"
#include <vector>



Professor::Professor ( std::string set_name, int set_age, std::string set_color, std::string set_job, std::string set_habit, std::string set_researchField, double set_salary )
{
    name = set_name;
    age = set_age;
    color = set_color;
    job = set_job;
    habit = set_habit;
    researchField = set_researchField;
    salary = set_salary;
}

Professor::Professor ()
{

}

Professor::~Professor ()
{
}


double Professor::Get_salary ()
{
    return salary;
}

// /* Tim 1 nguoi*/
//void Professor::find_ResearchField ( std::vector<Student> find ) 
//{
//    int vitri = -1;
//    //find sinh vien cung linh vuc
//
//    // so sanh
//
//    // in ket qua
//
//    for ( int m = 0; m < find.size (); m++ ) 
//    {
//        if (researchField == find[m].get_researchField() ) 
//        {
//            vitri = m;
//            break;
//
//        }
//
//    }
//
//    if ( vitri > -1 )
//    {
//        
//        std::cout << "\nSinh Vien Cung linh vuc voi giao su: "<<find[vitri].get_name();
//
//    }
//    else 
//    {
//        std::cout << "\nThe student you want to find does not exist";
//    }
//
//}

// tim nhieu nguoi

std::vector<Student> Professor::find_ResearchField ( std::vector<Student> find )
{
    int vitri = -1;
    
    std::vector<Student> vtstu;
    //find sinh vien cung linh vuc

    // so sanh

    // in ket qua

    for ( int m = 0; m < find.size (); m++ )
    {
        if ( researchField == find[m].get_researchField () )
        {
            vitri = m;
            vtstu.push_back (find[m]);

            //std::cout << "\nSinh Vien Cung linh vuc voi giao su: " << find[m].get_name () << std::endl;
        }

    }

    if ( vitri < 0 )
    {
        std::cout << "\nThe student you want to find does not exist" << std::endl;
    }
    return vtstu;
         
}

 /* Mot cach khac
void Professor::find_ResearchField ( std::vector<Student> find )
{
    bool found = false;
    //find sinh vien cung linh vuc

    // so sanh

    // in ket qua

    for ( int m = 0; m < find.size (); m++ )
    {
        if ( researchField == find[m].get_researchField () )
        {
            found = true;

            std::cout << "\nSinh Vien Cung linh vuc voi giao su: " << find[m].get_name () << std::endl;
        }

    }

    if ( found == false )
    {
        std::cout << "\nThe student you want to find does not exist" << std::endl;
    }

}*/





