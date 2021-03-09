#pragma once
#include <iostream>

using namespace std;

class student
{
    string fio;
    double karma;
    double uPlane;
public:
    student(string const&fio_="", double &karma_=0, double &uPlane=0) : fio(fio_), karma(karma_), uPlane(uPlane_){}
    double calculate(double &karma, double &uPlane);
    void print_p(student & other) const;
};

