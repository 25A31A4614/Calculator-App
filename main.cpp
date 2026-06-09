#include <iostream>
using namespace std;

class Calculator {
public:
    double add(double a, double b) {
        return a + b;
    }

    double subtract(double a, double b) {
        return a - b;
    }

    double multiply(double a, double b) {
        return a * b;
    }

    double divide(double a, double b) {
        if (b == 0) {
            cout << "Error! Division by zero is not allowed.\n";
            return 0;
        }
        return a / b;
    }

    int modulus(int a, int b) {
        if (b == 0) {
            cout << "Error! Division by zero is not allowed.\n";
            return 0;
        }
        return a % b;
    }
};

int main() {
    Calculator calc;
    int choice;
    double num1, num2;

    do {
        cout << "\n===== CALCULATOR MENU =====\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Modulus\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 5) {
            cout << "Enter first number: ";
            cin >> num1;

            cout << "Enter second number: ";
            cin >> num2;
        }

        switch (choice) {
            case 1:
                cout << "Result = " << calc.add(num1, num2) << endl;
                break;

            case 2:
                cout << "Result = " << calc.subtract(num1, num2) << endl;
                break;

            case 3:
                cout << "Result = " << calc.multiply(num1, num2) << endl;
                break;

            case 4:
                cout << "Result = " << calc.divide(num1, num2) << endl;
                break;

            case 5:
                cout << "Result = "
                     << calc.modulus((int)num1, (int)num2) << endl;
                break;

            case 6:
                cout << "Exiting Calculator...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}
