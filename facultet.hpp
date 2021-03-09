#pragma once
#include <iostream>
using namespace std;

class facultet
{
protected:
    string name;
    double l_dec;
public:
    facultet(const string& name, const double& l_dec);
    void print(facultet & other) const;
};
