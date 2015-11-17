#include "someNiceClass.h"
#include <iostream>

using namespace std;

someNiceClass::someNiceClass()
{//constructor
     cout<<"Constructor"<<endl;
}

someNiceClass::~someNiceClass()
{//destructor
    cout<<"Destructed"<<endl;
}


void nicePrint()
{
cout<<"nicePrint"<<endl;
}
