#include <iostream>

using namespace std;

int main()
{
//if statement
if (7>4){
    cout << "spot on";
}

//relational ops
if (7>=4){cout << "kind of";} //gt-eq
if (7<=4){cout << "strange";} //lt-eq
if (7==4){cout << "two bits off";} //eq
if (7!=4){cout << "yep";} //n-eq

int a = 3; int b = 42;
if (b > a) {cout << "the answer is " << b << endl;}

//if-else
int mark;
cin >> mark;
if (mark < 50) {cout << "fail" << endl;}
else {cout << "congrats =)";}

//if nesting
if (mark >=50){
    cout << "good job"<<endl;
    if (mark >=100){cout << "wow"<<endl;}
}
else {cout << "sorry"<<endl;}


//single-statement
int kk = 10;
if (kk>=5) cout << "yes\n\n\n\n"<<endl;
else cout << "no\n\n\n\n"<<endl;

//LOOPs:

//while:
int num = 1;
while (num<6){
    cout << "num: "<<num<<endl;
    num++;
}

//merely asking for numbers
num = 1;
int number;
int total = 0;
while (num<=5){
    cin >> number;
    total += number;
    num++;
}

cout <<total<<endl;

//for
for (int x=1; x<10; x++){
    cout << "i am the model major general\n";
}
for (int a = 10; a>=0; a-=3){
    cout << a<<endl;
}

//do...while
//executes at least once...in a while!
int grok = 0;
do {
    cout << a <<endl;
    a++;
} while (a<5);



//switch
int draks;
cin >> draks;
switch(draks){
case 0:
    cout << "zero";
    break;
case 42:
    cout << "the right answer";
    break;
default:
    cout << "unknown";
}


//logic:
// && - AND
// || - OR
// !  - NOT

cout << "\n\n===>\twe have a nice place here\n\n";
int age = 23;
int money = 1000;
if (age >21 && money >500){
    cout << "come in ;)\n";
}
















    //probably I won't touch this one right now, if <>0 then IDE prints an error msg
    return 0;
}
