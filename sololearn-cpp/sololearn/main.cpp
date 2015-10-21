#include <iostream>
//already included in iostream:
//#include <string>



using namespace std;

int main()
{
// data types
int answer = 42; int antianswer = -42;
unsigned long int karamba = 123456789123456789123456789;

float pi = 3.14;
double temperature = 123.456;
long double pressure = -1234.5678;

char letter = 'a';


//needs <string> included:
string introduction =  "hello. my name is Inigo Montoya. Prepare to die.";


bool emcsquare = true;

//name conventions:
int BackCounterThreshold = 10; //PascalCase
int backCounter          = 50; //camelCase

int var; int VAR; int Var;     //three different vars - case sensitive

//arrays:
int aarr[5] = {1,2,3,4,5}; //explicit size
int barr[]  = {1,2,3,4,5}; //auto-size on init
cout <<   barr[0]<<endl;
cout <<         aarr[3]<<endl;

barr[2] = 42;

//iteration through an array:
for(int x = 0; x<5; x++){
    barr[x] = 42;
    cout << x << ":"<< barr[x] << endl;
}

int carr[] = {1,1,2,3,5,8,13};
int sum = 0;

for(int x=0; x<5;x++){
    sum +=carr[x];
}
cout<<sum<<endl;

//multi-dimensional:
int multia[3][4][2][5][100];
int multib[2][3] = {
{    1,2,3}, //1st row
{    2,3,4}  //2nd row
};
cout << multib[0][1]<< endl;








    //probably I won't touch this one right now, if <>0 then IDE prints an error msg
    return 0;
}
