#include<iostream>
using namespace std;

class MySalary{
    private:
    int salary;

    public:
    void SetSalary(int s ){             //Declaration of SetSalary Method
        salary = s;
    }
    int GetSalary(){              //Declaration of GetSlary Method
        return salary;
    }
};

int main()
{
    MySalary Employee;              // Creation of the Object
    Employee.SetSalary(20000);
    cout << Employee.GetSalary();



}