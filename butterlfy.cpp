#include <iostream>
using namespace std;

// This function is too print the character required number of time 
void PrintNTimes(int i , char c)  
{
    string (c, i);
    cout << string (c, i);
}

//This function is too print the Empty Spaces Required Nummber of times
void EmptyNTimes(int j, char d)
{
    string (d,j);
    cout << string (d,j) ;
}

// Main code for calling the function n number of times 
int main()
{
    int n;
    int i,j;
    char c= 'X';
    char d= ' ';
    cout << "Enter the Nummber:";
    cin >> n;
    for (i=1; i<=n+1; i++)
    {
        j= n+1-i;
        PrintNTimes(c,i);
        EmptyNTimes(d,j);
        EmptyNTimes(d,j);
        PrintNTimes(c,i);
        cout << endl;
    }
    for (i=n; i>=1; i--)
    {
        j= n+1-i;
        PrintNTimes(c,i);
        EmptyNTimes(d,j);
        EmptyNTimes(d,j);
        PrintNTimes(c,i);
        cout << endl;
    }

    return 0;

}