// To fina the pair of sum equal to the given integer

#include <iostream>
using namespace std;


int main()
{
    int array1[]= {1,2,3,4,6};
    int k=5;
    int len= sizeof(array1)/sizeof(int);
    int sum, i, j;
    int counter=0;         // Initiliazing the value of counter 

    for (i=0; i<=len-1; i++)
    {
        for (j=i+1; j<=len-1; j++)
        {
            sum = array1[i]+ array1[j];
            if (sum == k)
            {
                counter ++;         // Incrementing the value of counter if sum of any pair is equal to value k
            }
        }
    }
    cout << counter << endl;

}

