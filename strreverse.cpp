/*
// the first method uses inbuild reverse function in c++
#include<iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
  string greeting= "hello";
  // Note that it takes as a iterator  to start and end of the string as  arguments
  reverse(greeting.begin(), greeting.end());
  cout << greeting << endl;
}

*/

// The second method used swap function to reverse the string
/*
#include <iostream>
using namespace std;

int main() {
 
  string greeting = "Hello";
  int len = greeting.length();
  int n=len-1;
  for(int i=0;i<(len/2);i++){
    //Using the swap method to switch values at each index
    swap(greeting[i],greeting[n]);
    n = n-1;

  }
  cout<<greeting<<endl;
}*/
 /*
#include <iostream>
using namespace std;

int main() {
  
  string greeting = "Hello";
  int len = greeting.length();
  int n=len-1;
  for(int i=0;i<(len/2);i++){

    //Using temp to store the char value at index i so 
    //you can swap it in later for char value at index n
    char temp = greeting[i];
    //greeting[i] = greeting[n];   // This Line in the code is confusion to uderstand
    greeting[n] = temp;
    cout << greeting[n] << endl;
    cout << greeting[0] << endl;
    n = n-1;
    
  }
  //cout<<greeting<<endl;
}
*/
/*
#include <iostream>
using namespace std;

int main() {
 
  string greeting = "Hello";
  string ngreeting;
  int len = greeting.length();
  int n = len-1;
  int i = 0;
  while(i<=n){
    //Using the swap method to switch values at each index
    swap(greeting[n], ngreeting[i]);
    n = n-1;
    i = i+1;

  }
  cout<<ngreeting<<endl;
}
*/

#include <iostream>
using namespace std;

int main(){

  string original, Reverse;
  cout << "Enter the String you Want to Reverse:" ;
  cin >> original;
  //cout << "Enter the original string again:";
  //cin >> Reverse;

  int len= original.length();
  int n = len -1 ;
  int i=0;
  while ( i<= n){
    // Using the swap method to switch the values at each index
    //cout << " While Loop started"; 
    swap(original[i], original[n]);
    n= n-1;
    i= i+1;


  }
  cout << original << endl;

}

