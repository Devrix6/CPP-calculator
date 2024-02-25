#include <iostream>
#include <cmath> // for sqrt function
using namespace std;

int main() {
    char operation;
    int num1, num2;
    double result;

    cout << "Enter operation (a for addition, s for subtraction, d for division, m for multiplication, r for rounding, t for square root): ";
    cin >> operation;

    switch (operation) {
        case 'a':
            cout << "Enter two numbers for addition (integers): ";
            cin >> num1 >> num2;
            result = num1 + num2;
            cout << num1 << " + " << num2 << " = " << result << endl;
            break;
        case 's':
            cout << "Enter two numbers for subtraction (integers): ";
            cin >> num1 >> num2;
            result = num1 - num2;
            cout << num1 << " - " << num2 << " = " << result << endl;
            break;
        case 'd':
            cout << "Enter two numbers for division: ";
            cin >> num1 >> num2;
            if (num2 != 0) {
                result = double(num1) / num2; // Use double for division to avoid integer division
                cout << num1 << " / " << num2 << " = " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        case 'm':
            cout << "Enter two numbers for multiplication (integers): ";
            cin >> num1 >> num2;
            result = num1 * num2;
            cout << num1 << " x " << num2 << " = " << result << endl;
            break;
        case 'r':
            cout << "Enter a number to round: ";
            cin >> num1;
            cout << "Round to nearest integer: " << round(num1) << endl;
            break;
        case 't':
            cout << "Enter a number to find the square root: ";
            cin >> num1;
            if (num1 >= 0) { // Handle negative numbers gracefully
                result = sqrt(num1);
                cout << "Square root of " << num1 << " = " << result << endl;
            } else {
                cout << "Error: Square root of negative numbers is not defined." << endl;
            }
            break;
        default:
            cout << "Invalid operation." << endl;
    }

    return 0;
}
