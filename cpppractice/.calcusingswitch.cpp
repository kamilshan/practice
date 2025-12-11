#include <iostream>
using namespace std;
int main() {
    char op;
    double num1 = 0.0, num2 = 0.0, result = 0.0;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter two numbers: ";
    if (!(cin >> num1 >> num2)) {
        cout << "Invalid input for numbers." << '\n';
        return 1;
    }

    switch(op) {
        case '+':
            result = num1 + num2;
            cout << num1 << " + " << num2 << " = " << result << '\n';
            break;
        case '-':
            result = num1 - num2;
            cout << num1 << " - " << num2 << " = " << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            cout << num1 << " * " << num2 << " = " << result << '\n';
            break;
        case '/':
            if(num2 != 0.0) {
                result = num1 / num2;
                cout << num1 << " / " << num2 << " = " << result << '\n';
            } else {
                cout << "Error! Division by zero." << '\n';
            }
            break;
        default:
            cout << "Error! Operator is not correct." << '\n';
            break;
    }

    return 0;
}