// Array Reversing using the single for loop

#include <iostream>
using namespace std;

int main()
{
     int original[4]= {10,20,30,40};

     int reverse[4]={};
     int len= sizeof(original)/sizeof(int);
     int n= len -1 ;
     int i, j=0;
     //int k=0;

     // This for loop swaps the last index of value of first original to first index value of Reverse array
     for (i=3; i>=0; i--)
     {
          reverse[j]=original[i];
          cout << reverse[j] << " " << endl;
          j= j+1;
          cout << endl;

     }
}
