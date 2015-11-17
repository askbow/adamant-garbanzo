#include <iostream>
//already included in iostream:
//#include <string>

//for rand()
#include <cstdlib>
//for time():
#include <ctime>

#include "someNiceClass.h"

using namespace std;


//classes and objects
class BankAccount{
 public:
     //constructor:
     BankAccount(string nm="", float saldo = 0){
     balance = saldo;
     setName(nm);
     }

     //public methods:
     string getName(){
      return name;
     }
     void setName(string x){
     name = x; //in real world, here should be a validation
     }
     int deposit(float sum){
     balance +=sum;
     return 0;
     }
     int withdraw(float sum){
     if(sum<=balance){ //basic check
     balance -=sum;
     return 0;
     }
     else{
        return -1; //not enough money
     }
     }//withdraw
     float readbalance(){
     return balance;
     }
 private:
    float balance;
    string name;
};




int main()
{
BankAccount test("kinder", 100); //instantiate
cout<<test.getName()<<endl;
test.setName("aloha"); //call public method to set private property
cout<<test.getName()<<endl;

test.deposit(100.95);
cout<<test.readbalance()<<endl;
test.withdraw(1.1);
cout<<test.readbalance()<<endl;
test.withdraw(test.readbalance());
cout<<test.readbalance()<<endl;

//next class exercise:
someNiceClass obj;
//using member class functions:
obj.nicePrint();
//using a pointer to refer to the object
someNiceClass *ptr = &obj;
//member usage:
ptr->nicePrint();


//const exercises:
const int x=42;

const someNiceClass nak;
//only const member functions can be called by const class objects
nak.cnicePrint();











    //probably I won't touch this one right now, if <>0 then IDE prints an error msg
    return 0;
}

