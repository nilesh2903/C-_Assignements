
#include <iostream>
#include <string.h>
using namespace std;
int main() {
    int x, y, z, i,a,b,c;
    cout << "Enter any value in between 1 to 500:";
    cin >> x ;
    if (x < 0 || x>500 ){
         cout  <<"Invalid user input";
    }
    else{
        // covert int string to number to find power of the number 
        string numberString = to_string(x);
        //get the string length
        y = numberString.length();
        cout << x << endl;
        cout << "Power of the Number:"<< y <<endl;
        int a= stoi(numberString[0]);  
        //a =numberString[0];
        //b=numberString[1];
        //c=numberString[2];
        z= a+b+c;
        cout << z ;
            
        }
       
   

    return 0;
}
