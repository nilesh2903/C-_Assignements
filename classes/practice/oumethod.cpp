// Example to Call a Method from a Clas

#include <iostream>
using namespace std;

class MyClass{
    public:
    void MyFunction();          // Declaration of Method
};

// Method defination can be outside the class
void MyClass::MyFunction()              // While Wiring fucntion Defination claas must be associated
{   

    cout << "Hello Nilesh";

}

int main()
{
    MyClass myObj;      // Create an Object
    myObj.MyFunction();
}