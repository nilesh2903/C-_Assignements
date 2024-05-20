#include <iostream>
using namespace std;

int main()
{
    int x,y,i,j;
    cout<< "Length of the Rectangle:";
    cin >>x;
    cout << "Width of the Rectangle:";
    cin >>y;

    for (i=1; i<=y; i++)
    {
        for (j=1; j<=x; j++){
            if (i == 1 || i == y)
            {
                cout<< "X";
            }
            else if (j ==1 || j ==x )
            {
                cout<< "X";
            }
            else if (2<i<x-1 || 2<j<y-1)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    
    

}