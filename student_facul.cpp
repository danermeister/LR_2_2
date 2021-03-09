#include <iostream>
#include "student_facul.hpp"

double student_facul::calculate(double &karma, double &uPlane, double &l_dec)
{
    return student::calculate(karma, uPlane) + l_dec;
}
