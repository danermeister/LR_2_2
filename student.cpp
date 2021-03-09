#include "student.hpp"
#include <iostream>

double student::calculate(double &karma, double &uPlane)
{
    float n=0;
    n = 1.0 - karma - uPlane;
    return n;
}

void student::print_p(student & other) const
{
    double p=other.calculate(other.karma, other.uPlane);
    cout<<"FIO:"<<other.fio<<endl;
    cout<<"Karma: "<<other.karma<<endl;
    cout<<"Uchebniy plan: "<<other.uPlane<<endl;
    cout<<"Veroyatnost' otchisleniya: "<<p<<endl;
}

