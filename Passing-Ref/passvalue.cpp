
// Function to increment a variable by reference
/*
void incrementByReference(int& x) {
    x++;
}

int main() {
    int num = 5;
    cout << "Before increment: " << num << endl;
    incrementByReference(num);
    cout << "After increment: " << num << endl;
    return 0;
}
*/
#include <iostream>
using namespace std;

void incrementByvalue(int x) {
    x++;
}

int main() {
    int num = 5;
    cout << "Before increment: " << num << endl;
    incrementByvalue(num);
    
    cout << "After increment: " << num << endl;
    return 0;
}
