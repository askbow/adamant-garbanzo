#include "Person.h"
#include "Birthday.h"

Person::Person()
:name(n), bd(b)
{
    //ctor
}


void Person::printinfo()
{
    cout<<name<<endl;
    bd.printDate();
}
