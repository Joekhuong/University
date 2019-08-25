// University.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Human.h"
#include "Headmaster.h"
#include "Student.h"
#include "Professor.h"
#include <vector>

int main ()
{
    Headmaster hs ( "MNO", 51, "yellow", "Leader of School", "Testing", "Technology", 5500 );
    // Tao ra danh sach sinh vien

    std::vector<Student> sinh_vien;
    sinh_vien.push_back ( Student ( "Antti", 20, "white", "Bartender", "Swim", "Opera" ) );
    sinh_vien.push_back ( Student ( "Matti", 21, "black", "Chef", "Swim", "Math" ) );
    sinh_vien.push_back ( Student ( "Mikka", 22, "white", "Actor", "Swim", "Physic" ) );
    sinh_vien.push_back ( Student ( "Tony", 23, "yellow", "Coder", "Swim", "Mechanic" ) );
    sinh_vien.push_back ( Student ( "Rosa", 24, "black", "Streamer", "Swim", "Education" ) );
    sinh_vien.push_back ( Student ( "Joe", 25, "white", "Youtuber", "Swim", "History" ) );
    sinh_vien.push_back ( Student ( "Anthony", 26, "white", "Driver", "Swim", "Math" ) );
    sinh_vien.push_back ( Student ( "Joel", 27, "black", "Singer", "Swim", "Opera" ) );
    sinh_vien.push_back ( Student ( "Pekka", 28, "yellow", "Teacher", "Swim", "Physic" ) );
    sinh_vien.push_back ( Student ( "Kari", 29, "white", "Gymer", "Swim", "Food" ) );
    sinh_vien.push_back ( Student ( "Lassi", 30, "black", "Doer", "Swim", "Physic" ) );

    hs.st = sinh_vien;
    
    //Tao 1 mang sv khac cho researchField
    std::vector<Student> researchST;


    //Tao ra danh sach Giao Su
    //std::vector<Professor> giao_su;
    hs.prof.push_back ( Professor ( "Teo", 60, "white", "Professor", "Reading", "Hospitality", 10000 ) );
    hs.prof.push_back ( Professor ( "Ti", 59, "black", "Professor", "Listening", "Mechanic", 9500 ) );
    hs.prof.push_back ( Professor ( "Tun", 58, "yellow", "Professor", "Swim", "Developer", 9000 ) );
    hs.prof.push_back ( Professor ( "Bi", 57, "white", "Professor", "Jogging", "Computer", 8500 ) );
    hs.prof.push_back ( Professor ( "Ku", 56, "black", "Professor", "Walking", "Math", 8000 ) );
    hs.prof.push_back ( Professor ( "ABC", 55, "yellow", "Professor", "Running", "Food", 7500 ) );
    hs.prof.push_back ( Professor ( "DEF", 54, "white", "Professor", "Sing", "Opera", 7000 ) );
    hs.prof.push_back ( Professor ( "GHI", 53, "black", "Professor", "Watching", "History", 6500 ) );
    hs.prof.push_back ( Professor ( "JKL", 52, "white", "Professor", "fighting", "Physic", 6000 ) );
    hs.prof.push_back ( Professor ( "MNO", 51, "yellow", "Professor", "Testing", "Technology", 5500 ) );

    for (int i = 0; i < hs.st.size(); i++ ) 
    {
        hs.st[i].Show_Student_List ();
    }

    

    double tongluong;
    tongluong = hs.totalSalary ( hs.prof );

    std::cout << "\nTotal professor's salary are: " << tongluong << std::endl;

    //Headmaster addStudent ( "MNO", 51, "yellow", "Professor", "Testing", "Technology", 5500 );
    //hs.addStudent ( sinh_vien);


    //Headmaster listOfStudent ( "MNO", 51, "yellow", "Professor", "Testing", "Technology", 5500 );
    

    //hs.removeStudent ( hs.st );

    hs.displayStudent ( hs.st );


    researchST = hs.prof[4].find_ResearchField ( researchST );
    

    for ( int s = 0; s < researchST.size (); s++ ) 
    {  

        std::cout << "\nSinh Vien Phu Hop la " << researchST[s].get_name() << std::endl;
        
    }

    

}


