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
if (kk>=5) cout << "yes"<<endl;
else cout << "no"<<endl;






    //probably I won't touch this one right now, if <>0 then IDE prints an error msg
    return 0;
}
