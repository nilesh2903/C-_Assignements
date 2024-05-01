#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string  original, Reverse;
    cout << "Enter the string you want to check:";
    cin >> original ;
    cout << "Enter the string again:";
    cin >> Reverse;

    int len = Reverse.length();
    int i=0;
    int n = len-1;
    while (i <= n){

        swap(Reverse[i], Reverse[n]);
        n= n-1;
        i= i+1;

    }
    cout << Reverse << endl;

    // Conditional Statements for the comparision of the Palindome String
    if (original == Reverse){
        cout << "Entered String is Palindome String:";
    }
    else {
        cout << "Enter String is not Palindome String:";
    }
    return 0;

}