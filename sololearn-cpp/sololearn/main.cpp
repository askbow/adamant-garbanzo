#include <iostream>

using namespace std;

int main()
{
    //basic vars:
    int myVar = 0;
    int a; int b = 12;
    a = 30;
    int sum = a + b;
    cout << myVar;
    cout << sum; // outputs 42

    //var input-output
    cout << "please enter a number \n";
    int num;
    cin >> num;
    cout << "give me more numbers!!!!!!! \n";
    cin >> a >> b;
    cout << "Sum is:" << a+b << endl;

    //basic arithmetic:
    int x = 40+60;
    cout << x <<endl;
    x = 100 - 60;
    cout << x;
    x = 5 * 6;
    cout << x;
    x = 10 / 3; //remainder dropped, because int
    cout << x;
    x = 25 % 7; //modulus - gives remainder after int div
    cout << x;
    x = 5 + 2 * 2; //natural precedence
    cout << x;
    x = (5 + 2) * 2; //parentheses
    cout << x;


    //probably I won't touch this one right now, if <>0 then IDE prints an error msg
    return 0;
}
