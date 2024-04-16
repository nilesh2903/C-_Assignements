#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int x,y=4;
    cout << "Type in the value year:" << endl;
    cin >> x ;
    // Logic of leap year
    int z;
    z = x % y;
    
    if (z == 0){
    cout << "This is a leap year"<<endl;
    }
    else
    {
    cout << "This is not leap year"<< endl;
    }

    return 0;
}