// Example to Call a Method from a Clas

#include <iostream>
using namespace std;

class MyClass{
    public:
    void MyFunction(){
        cout << "Hello Nilesh";

    }

};

int main()
{
    MyClass myObj;      // Create an Object
    myObj.MyFunction();
}