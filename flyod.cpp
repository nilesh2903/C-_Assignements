#include <iostream>
using namespace std;

void PrintFlyodsTriangle(int rows){
    int number = 1;
    int i,j;
    for (i=1 ; i<=rows; i++)
    {
        for (j=1; j<=i; j++)
        {
            cout << number<< " ";
            number ++ ;            //increment of the number to start the next loop with the new value

        }
        cout << endl;  //addition of the new line
    }

}


int main()
{
    int rows;
    cout << "Enter the Number of rows of the floyed's Triangle:" ;
    cin >> rows ;
    PrintFlyodsTriangle(rows);
    return 0;
}
