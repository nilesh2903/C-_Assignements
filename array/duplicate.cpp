// To find duplicate element in an array 

#include <iostream>
using namespace std;

int main()
{

    int array1[]= {9,2,4,6,4,6,9};
    int len= sizeof(array1)/sizeof(int);
    int i,j;
    int duplicate;
    for (i=0; i<=len-1; i++)
    {
        for (j=i+1; j<=len-1; j++)
        {
            
            if (array1[i] == array1[j])         // Check if the value of aaray element is duplicate
            {
                duplicate= array1[i];         
                cout << duplicate << "  ";
            }
            
        }
    }
}