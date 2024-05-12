#include <iostream>
using namespace std;

void occurance(string& str, int i, int k)
{
    for(i =0; i<=k; i++)
    {
        int count;
        if(str[i]== 's')
        {
            count++;
        }
    }
    
}

int main()
{   
    string str;
    cout <<"Please Enter the String:";
    cin >> str;
    char c;
    cout << "Please enter the character to be checked:";
    cin >> c ;
    int n,i=0;
    int j= str.length();
    int k= j-1;
    int count;
    occurance(str, i, k);
    cout<< count;

    
}