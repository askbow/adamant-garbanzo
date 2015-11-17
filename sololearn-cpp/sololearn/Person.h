#ifndef PERSON_H
#define PERSON_H
#include "Birthday.h"
#include <string>
class Person
{
    public:
        Person(string n, Birthday b);
        void printinfo();
    protected:
    private:
        string name;
        Birthday bd;
};

#endif // PERSON_H
