#include <iostream>
using namespace std;

// Recursive function to compute nth Fibonacci number
int fibonacci(int n) {
    // Base cases: Fibonacci of 0 and 1 are 0 and 1, respectively
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    // Recursive case: Fibonacci(n) = Fibonacci(n-1) + Fibonacci(n-2)
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 10; // Calculate the 10th Fibonacci number
    cout << "Fibonacci number at position " << n << " is: " << fibonacci(n) << endl;
    return 0;
}
