#include <iostream>
using namespace std;

// Function to increment a variable by reference
void incrementByReference(int& x) {
    x++;
}

int main() {
    int num = 5;
    cout << "Before increment (pass by reference): " << num << endl;
    incrementByReference(num);
    cout << "After increment (pass by reference): " << num << endl;
    return 0;
}
