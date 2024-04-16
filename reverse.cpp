 #include <iostream>
 #include <string.h>
 
 using namespace std;
 
 int main()
 {
     int a,b;
     cout<< "Try to reverse any number:" << endl;
     cin >> a;
     cout << "Original Input:"<< a << endl;
     string numberString = to_string (a);
     b = numberString.length();
     cout << "Reversed Number:";
     for (int i=b-1; i>=0; i--)
     cout <<numberString[i];
     return 0;
 }