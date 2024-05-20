#include<iostream>
using namespace std;

// Parent class
class Animal{
    public:
    void AnimalSound(){
        cout << "This is my Animal Sound:" << endl;
    }
}; 

//  Child class
class Pig: public Animal{
    public:
    void AnimalSound()
    {
        cout << "Oink & Oink" << endl;
    }
};

//child class
class Dog: public Animal{
    public:
    void AnimalSound()
    {
        cout << "Bow & Bow" << endl;
    }
};


int main()
{
    Animal myanimal;        // Object Created
    Pig mypig;
    Dog mydog;

    myanimal.AnimalSound();
    mypig.AnimalSound();
    mydog.AnimalSound();
}