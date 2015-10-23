#include <iostream>
//already included in iostream:
//#include <string>

//for rand()
#include <cstdlib>
//for time():
#include <ctime>

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
cout << add<<endl<<endl;

//rand():
cout <<rand()<<endl<<endl;
for (int x = 1; x <=4; x++){
    cout <<rand()<<endl<<endl;
}
cout << 1 + (rand() % 10)<<endl<<endl; //gen a num between 1 and 10

//srand() - seed for randomness:
srand(1923478924789); //key-bashing, not really random
cout<< rand()<<endl<<endl; //26981 this rand should always return the same output if the seed is unbesmirched

srand(time(0));
cout << 1 + (rand()%1000)<<endl<<endl; //should give a little more random number


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
