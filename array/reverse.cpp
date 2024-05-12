#include <iostream>
using namespace std;

// This is done using 2 for loop 
int main()
{
     int array1[4]= {10,20,30,40};

     int array2[4]={};
     int len= sizeof(array1)/sizeof(int);
     int n= len -1 ;
     int i, j=n+1;

     for (i=0; i<=3; i++)
     {
         j= j-1;
         array2[j]=array1[i]; 
     }
     for (i=0; i<=n; i++)
     {
         cout << array2[i] << endl;
     }
     
     
     //cout << "Reverse Arraay:" << array2[i] ; 


}