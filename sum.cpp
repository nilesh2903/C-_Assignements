#include<iostream>
using namespace std;



int main()
{
    //check  if the entered number is negative number
    int n;
    int temp=0;
    
    do
    {
        cout << "Please Enter the New Numner:";
        cin >> n;
        if (n >=0)
        {
        temp=temp+n;
        }
    } while (n>=0);
    cout << "Sum of enterted number is:" << temp << endl;
    return 0;
}