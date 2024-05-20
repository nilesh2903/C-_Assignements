#include<iostream>
using namespace std;

class MyClass{
    public:
    void myfunction()
    {
        cout << "This is My Function";
    }
};

class Mychild: public MyClass{              // Single Level inheritance 

};

class GrandChild: public Mychild{              // Multilevel inheritance

};

int main()
{
    GrandChild myObj ;          // Declaration of the Object
    myObj.myfunction();         // Access the parent method with multilevel inherited class
}