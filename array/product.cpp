// To find product of array expect itself

#include <iostream>
using namespace std;

int main()
{
    int array1[]= {1, 2, 3, 4};
    int product[]={1,2,3,4};
    int len= sizeof(array1)/ sizeof(int);
    int i,j=0;
    int value=1;
    do
    {
    for (i=0; i<=3; i++)
    {
        if (i!=j)
        {
            //cout << array1[i] << "  " ;
            value = array1[i]* value;
        }
        
    }
    //product[k] = value;
    cout << value << "  ";
    j=j+1;
    cout << endl;
    value = 1;
    }
    while (j<=3);

}
