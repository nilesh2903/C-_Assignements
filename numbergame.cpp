#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    {
        //Seed the random number generator with the current time
        srand(time(nullptr));
        int N = 100 ;
        // Genrate and print Random Number
        cout << "Random Number:" << rand() % N << endl;
        return 0;
    }
       
}