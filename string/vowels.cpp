#include <iostream>
using namespace std;

int main()
{
    string count;
    cout << "Get the string from the user:";
    cin >> count; 
    int len= count.length();
    int i, n= len -1;
    int vowels=0;
    int casonants;
    for (i=0; i<=n; i++)
    {
        if (count[i]=='a' || count[i]=='e' || count[i]=='i' || count[i]== 'o' || count[i]=='u')
        {        
            vowels++;
            
        }
    
    }
    cout << "Number of Vowels:"<< vowels << endl;
    casonants= len- vowels;
    cout << "Number of Casonants:" << casonants << endl;



}