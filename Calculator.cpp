#include <iostream>
using namespace std;
int addition(int num1, int num2);
int subtraction(int num1, int num2);
double multiplication(double num1, double num2); 
double division(double num1, double num2); 
int main() {
    int new_num, op,new_num2; 
    char op2;
    do {
        cout << "1-Addition\n2-Substraction\n3-Multiplication\n4-Division";
        cin >> op;
        switch (op) {
        case 1:
            cout << "Enter two numbers to add: ";
            cin >> new_num >> new_num2;
            cout << addition(new_num, new_num2) << endl;
            break;
        case 2:
            cout << "Enter two numbers to subtract: ";
            cin >> new_num >> new_num2;
            cout << subtraction(new_num, new_num2) << endl;
            break;
        case 3:
            cout << "Enter two numbers to multiply: ";
            cin >> new_num >> new_num2;
            cout << multiplication(new_num, new_num2) << endl;
            break;
        case 4:
            cout << "Enter two numbers to divide: ";
            cin >> new_num >> new_num2;
            if (new_num2 == 0) {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            else {
                cout << division(new_num, new_num2) << endl;
            }
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }

        cout << "Do you want to do another operation? (Y/N): ";
        cin >> op2;
    } while (op2 == 'Y' || op2 == 'y');

    return 0; 
}
int addition(int num1, int num2) {
    return num1 + num2;
}
int subtraction(int num1, int num2) {
    return num1 - num2;
}

double multiplication(double num1, double num2) {
    return num1 * num2;
}

double division(double num1, double num2) {
    if (num2 == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return 0.0; 
    }
    return num1 / num2;
}

