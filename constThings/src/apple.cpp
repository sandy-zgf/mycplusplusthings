#include "apple.h"

PerSon::PerSon(char* n,int a,SexType s)
{
    name = new char[strlen(n) + 1];
    strcpy(name,n);
    age =a;
    sex = s;

}

PerSon::~PerSon()
{
    delete []name;
}

int PerSon::get_age()
{
    return this->age;
}

PerSon& PerSon::add_age(int a)
{
    age+=a;
    return *this;
}