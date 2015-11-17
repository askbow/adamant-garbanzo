#include "Birthday.h"

Birthday::Birthday()
:month(m),day(d), year(y)
{
    //ctor
}

void Birthday::printDate()
{
    cout<<month<<"/"<<day<<"/"<<year<<endl;
}
