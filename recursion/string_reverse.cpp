#include<iostream>
using namespace std;

void reversestring(string& reverse, int start, int end )
{
    //base case for the recursive function
    if (start >= end )
    {
        return ;
    }
    swap (reverse[start], reverse[end]);
    reversestring(reverse, start+1, end-1);
}

int main()
{
    string reverse;
    cout << "Enter the string you want to reverse:" ;
    cin >> reverse;
    int start, n;
    n = reverse.length();
    int end = n -1;
    cout << end ;
    reversestring(reverse, start, end);
    cout << "Reverse String is:" << reverse << endl;

}