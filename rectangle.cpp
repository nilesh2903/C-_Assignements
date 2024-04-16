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
            cout<< "X";
        }
        cout << endl;
    }
    

}