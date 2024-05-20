#include<iostream>
using namespace std;


class MyClass{
    public:
    int x;
    private:
    int y;
};  

int main()
{
    MyClass myobj; // Onbject Specifier
    myobj.x= 50;
    //myobj.y= 60;     // We canbnot access this as it is defined as a private atribute inside the class
    cout <<myobj.x << endl;
    //cout << myobj.y << endl;

}