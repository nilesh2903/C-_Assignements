//  Standard Example of declaration of class
#include <iostream>
using namespace std;

class MyClass{
    public:         // Access Specifier
    int Mynum;              // Atribute Int Variable
    string Mystring;        //Atribute string valiable
};

int main()
{
    MyClass myObj;      //create an object of myclass
    //Access the Atributes and Set Values
    myObj.Mynum= 50;
    myObj.Mystring="Nilesh";

    //Print Atributes Values 
    cout << myObj.Mynum << endl;
    cout << myObj.Mystring << endl;
    

}