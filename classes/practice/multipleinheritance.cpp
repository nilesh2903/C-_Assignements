#include<iostream>
using namespace std;

// first Parent Class
class Myclass{
    public:
    void myfunction(){
        cout << "This is my function"<< endl;
    }
};

//Second Parent Clas

class MyOtherClass{
    public:
    void myothefunction(){
        cout << "This is My Other Function:";
    }
};


// Declaration of the Child Class Inherated from multiple base classes  
class MyChildClass: public MyOtherClass , public Myclass{

};

int main()
{
    MyChildClass myObj;
    myObj.myfunction();
    myObj.myothefunction();
}


