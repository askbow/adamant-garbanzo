#include <iostream>
//already included in iostream:
//#include <string>

//for rand()
#include <cstdlib>
//for time():
#include <ctime>

#include "someNiceClass.h"
#include "Birthday.h"
#include "Person.h"


using namespace std;


//classes and objects
class BankAccount{
 public:
     //constructor:
     BankAccount(){}
     BankAccount(string nm="", float saldo = 0){
     balance = saldo;
     setName(nm);
     }
     BankAccount(float saldo = 0, string nm="")
     :balance(saldo), name(nm){}
     //operator overloading:
     BankAccount operator+(BankAccount &obj)
     {
         BankAccount red;
         red.balance=this->balance+obj.balance;
         return red;
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
     //using "this":
     void printinfo(){
     cout<<name<<endl;//var directly
     cout<<this->balance<<endl;//this is a pointer
     }
     void printinfoinline(){
     cout<<name<<":"<<(*this).balance<<endl;
     }
 private:
    float balance;
    string name;


    //friend functions:
    friend void camarade(BankAccount &obj);
};

void camarade(BankAccount &obj);
{
    obj.name = obj.name + " is our friend";
    cout<<obj.balance;
}


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

//friendly:
camarade(test);

//overload:
BankAccount second("minder", 500);
BankAccount summer = test + second;


//this:
test.printinfo();
test.printinfoinline();

//next class exercise:
someNiceClass obj(56,70);
//using member class functions:
obj.nicePrint();
//using a pointer to refer to the object
someNiceClass *ptr = &obj;
//member usage:
ptr->nicePrint();


//const exercises:
const int x=42;

const someNiceClass nak(42, 123);
//only const member functions can be called by const class objects
nak.cnicePrint();

//class composition exercise
Birthday bd(2,21,1985);
Person p("David",bd);
p.printinfo();








    //probably I won't touch this one right now, if <>0 then IDE prints an error msg
    return 0;
}

