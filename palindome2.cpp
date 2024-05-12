// This approach use the techniquw to save the Reverse string into new string 

#include<iostream>
using namespace std ;

int main()
{
    string original;
    cout << "Get the String to be checked:";
    cin >> original ;
    
    string new_original;
    int len = original.length();
    int n= len-1;
    //cout << n; 
   
    // push_back method 
    // loop to save the string to the new 
    
    for (; n >=0; n--)
    {
    new_original.push_back(original[n]);
    }
    cout << original << endl;
    cout << new_original << endl;

    if (original == new_original){
        cout << "This is Palindome String";
    }
    else {
        cout << "This is not palindome string";
    }
   //for (n=len-1; n--;)
   //cout << n << endl;
}