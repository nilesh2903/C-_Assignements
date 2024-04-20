#include <iostream>
using namespace std;

// Create an Function to Print an Output for n times
void PrintNTimes(char c int i){
    {
        cout << string (i, c);
    }
}

//Craete an function to print an Empty Rever n times
void RPrintNTimes(char d, int k){
    {
        cout << string (k, d);
    }
}
// Print N Space for the butterfly pattern

void PrintESpaces(char e, int l){
    {
        cout << string (l, e) ;
    }
}



// Main Programme starts from here
int main()
{   
    //Variable Declaration and Initialization
    
    int i,k,l, n=6 ; // Type the number of the times the character needs ti be printed
    char c = 'X'; // Assign the character which need to be printed
    char d = 'X'; // Assign the Character which needs to be printed
    char e = 'Y'; // Assign the Caharacter for the Black Space 
    cout << "The required output is" << endl ;

    for (i=1; i<=n+1; i++){
        {
        int l= n-i;
        // Function Calling 
        PrintNTimes(c , i);
        cout << endl;
    }
    }
    
    for (k=n; k>=1;--k){
        {
        // Function Calling
        int l= n-k;
        RPrintNTimes(d, k);
        }
    }
     
    return 0;

}