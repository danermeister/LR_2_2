#include "facultet.hpp"
#include <iostream>

using namespace std;

facultet::facultet(const string& name, const double& l_dec) : name(name), l_dec(l_dec)
{
    
}

void facultet::print(facultet & other) const
{
    cout<<"FIO:"<<other.name<<endl;
    cout<<"loyalnost' deconata: "<<other.l_dec<<endl;
}
