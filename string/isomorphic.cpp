#include <iostream>
using namespace std;

void isomorphic(string& s, string& t, int len, int len1)
{
    if ( len== len1)
    {
        
        cout <<"Perform the Isomorphic Algo:";
    }
    else
    {
        cout << "This is not an isomorphic string:";
    }
}

int main()
{
    string  s;
    cout << "Get the string from the user:";
    cin >> s ;
    string t ;
    cout << "Get the  2nd String from the user:";
    cin >> t ;
    int len= s.length();
    int len1= t.length();
    isomorphic(s, t, len, len1);

}