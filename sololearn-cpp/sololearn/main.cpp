#include <iostream>
//already included in iostream:
//#include <string>

using namespace std;

//function declaration:
void printsomestuff(int inpt); //prototype, MUST include all the params
int timesTwo(int x);
int addNumbers(int x, int y);


int main()
{

printsomestuff(timesTwo(21)); //the argument

cout <<timesTwo(146)<<endl; //well-known percentage just doubled, said the news
cout <<timesTwo(923847437)<<endl;//just bashing on the keyboard's num row
cout <<timesTwo(4)<<endl; //got that with a good dice - pretty random
cout <<addNumbers(timesTwo(addNumbers(25,25)), 533)<<endl;
int add = addNumbers(35,7);
cout << add<<endl;

    //probably I won't touch this one right now, if <>0 then IDE prints an error msg
    return 0;
}


void printsomestuff(int inpt)
{
cout << inpt << " is the answer"<<endl; //inpt is a parameter
}

int timesTwo(int x)
{
    return x * 2;
}

int addNumbers(int x, int y)
{
    return x + y;
}
