#include<iostream>
using namespace std;

class Employee{
    protected:
    int salary;

};

class Programmer: public Employee{
    public:
    int bonus;

    void SetSalary(int s)
    {
        salary= s;
    }
    int getsalary()
    {
        return salary;
    }


};



int main()
{
    Programmer myObj;       // Creation of the Object
    myObj.bonus= 40000;
    myObj.SetSalary(50000);
    cout << myObj.bonus << endl;
    cout << myObj.getsalary();
}