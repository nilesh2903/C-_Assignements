#include<iostream>
using namespace std;


// Declaration of Parent Class

class Vehicle{
    public:
    string brand= "Ford";

    void honk(){
        cout << "tut , tut" << endl;
    }
};


// Declaration of Child Class (Inherited from Parent Class)
class Car: public Vehicle{
    public:
    string model = "Mustang";
};

int main()
{   
    Car mycar;              // Declaration of Object
    mycar.honk();

    cout << mycar.brand + " " + mycar.model ; 
}