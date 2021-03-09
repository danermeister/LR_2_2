#pragma once
#include <iostream>
#include "student.hpp"
#include "facultet.hpp"



class student_facul : public student, facultet 
{
    double calculate(double &karma, double &uPlane, double &l_dec);
};
