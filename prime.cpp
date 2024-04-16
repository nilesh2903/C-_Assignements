#include <iostream>
 #include <string.h>
 
 using namespace std;
 
 int main()
 {
     int a,b,i;
     int c=0;
     cout<< "Enter the number to be checked:" << endl;
     cin >> a;
     for (i=2; i<a; i++){
     b= a %i;
     if (b == 0){
         int c =1 ;
         cout  << a << " is not a prime number";
         break;
     }
     if (c == 0){
         cout << a << " is a prime number";
         break;
     }
     
     }
     
     return 0;
 }