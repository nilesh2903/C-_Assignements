
#include <iostream>

using namespace std;

int main() {
    int percentage;

    cout << "Enter the candidate's percentage (0-100): ";
    cin >> percentage;
  

    if (percentage < 0 || percentage > 100) {
        cout << "Invalid percentage. Please enter a value between 0 and 100." << endl;
        return 1; // Indicate error (optional)
    }

    switch (percentage / 10) { // Efficient division to get the first digit (grade)
        case 10:
        case 9:
            cout << "Grade: A+" << endl;
            break;
        case 8:
            cout << "Grade: A" << endl;
            break;
        case 7:
            cout << "Grade: B+" << endl;
            break;
        case 6:
            cout << "Grade: B" << endl;
            break;
        case 5:
            cout << "Grade: C+" << endl;
            break;
        case 4:
            cout << "Grade: C" << endl;
            break;
        case 3:
            cout << "Grade: D" << endl;
            break;
        case 2:
            cout << "Grade: F" << endl;
            break;
        case 0:
        case 1:
            cout << "Grade: F" << endl;
            break;
        default:
            cout << "Unexpected error: Invalid grade calculation." << endl;
    }

    return 0;
}