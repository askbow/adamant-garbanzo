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


//pointers:
int goals = 5;
cout << &goals <<endl; //var address

//pointers to different data types:
int *ip;
double *dp;
float *fp;
char *ch;

int *goalPtr;
goalPtr = &goals; //write an address to a pointer

cout <<goals<<endl; //var value
cout <<goalPtr<<endl; //var's address
cout << *goalPtr<<endl; //var's value

//experiment: this should work
cout << *&goals<<endl; //var's value

//using pointer dereferencing just as using the var:
int derefa = 1; //1
int *pDerefa = &derefa;
derefa = derefa + 2; //3
derefa = *pDerefa + 4; //7
*pDerefa = *pDerefa + 8; //15

//dynamic memory allocation: stack and heap
int stk = 2; //stack
int *hpr = new int; // allocate in heap
*hpr = 100; //store
cout << *hpr<<endl; //retrieve
delete hpr; //free memory from heap == delete allocation
//hpr is now a dangling pointer and can be reused:
hpr = new int;
// but don't forget to delete it:
delete hpr; hpr = NULL; //seems to be a safe way...

//same for arrays:
int *parra = NULL;
parra = new int[20]; //allocate mem
delete [] parra; // de-allocate memory from array

//size of data type:
cout << "\n\ndata type sizes:"<<endl;
cout << "\tchar       "<<sizeof(char)<<endl;
cout << "\tint        "<<sizeof(int)<<endl;
cout << "\tfloat      "<<sizeof(float)<<endl;
cout << "\tdouble     "<<sizeof(double)<<endl;
int sizeablevar = 42;
cout << "\tvar        "<<sizeof(var)<<endl;
double bigarr[100];
cout << "\tbigarr     "<<sizeof(bigarr)<<endl;
cout << "\tbigarr len "<<sizeof(bigarr)/sizeof(bigarr[0])<<endl;




    //probably I won't touch this one right now, if <>0 then IDE prints an error msg
    return 0;
}
