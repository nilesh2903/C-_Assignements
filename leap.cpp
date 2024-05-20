#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int x,y=4;
    cout << "Type in the value year:" << endl;
    cin >> x ;
    // Logic of leap year
    int z, m, n;
    z = x % y;
    m =x % 100;
    n =x % 400;
  
    if (m == 0)
    {
        if (n == 0)
        {
            cout << "This is a leap year";
        }
        else 
        {
            cout << "This is not a leap year";
        }
    }
    else if (z == 0)
    {
        cout << "This is a leap year";
    }
    else 
    {
        cout << "This is not a leap year";
    }
}