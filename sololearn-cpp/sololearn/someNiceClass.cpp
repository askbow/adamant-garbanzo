#include "someNiceClass.h"
#include <iostream>

using namespace std;

someNiceClass::someNiceClass(int a, int b)
: simpleVar(a), constVar(b)
{//constructor
     cout<<simpleVar<<endl;
     cout<<constVar<<endl;
}

someNiceClass::~someNiceClass()
{//destructor
    cout<<"Destructed"<<endl;
}


void nicePrint()
{
cout<<"nicePrint"<<endl;
}

void someNiceClass::cnicePrint() const {
cout<<"const nice print"<<endl;
}
