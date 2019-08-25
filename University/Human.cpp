#include "pch.h"
#include "Human.h"


Human::Human ()
{
}


Human::~Human ()
{
}




void Human::set_value ()
{
}

//Bien thanh vien la private nen phai dung ham nay de get ve
std::string Human::Get_Habit ()
{
    return habit;
}

std::string Human::Get_researchField ()
{
    return researchField;
}

double Human::Get_salary ()
{
    return salary;
}