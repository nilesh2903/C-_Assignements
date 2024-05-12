// To find the larget element in the given array

#include <iostream>
using namespace std;

int main()
{   
    int i=0;
    int array[]={20, 192, 360, 450, 152};
    int len= sizeof(array)/sizeof(int);
    int n=array[i];   // initialize value of 'n' with the first element of array
    do
    {
        if (array[i]>= n)     // check if the value of current element of array is greater than initialize value 
        {
            n= array[i];        // replace a 'n' with the new value of greater array element
        }
        i= i+1; 
    }
    while (i<=len-1);
    cout << n;
}