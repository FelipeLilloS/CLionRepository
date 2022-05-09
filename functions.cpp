#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a+b;
}

int division(int a,int b){
    return a/b;
}

int multiplication(int a,int b){
    return a*b;
}

int substract (int a,int b) {
    return a-b;
}

int main() {
    int option,number1,number2;

    cout << "Hello, this is a basic calculator" << endl;

    while(true) {
        cout << "-----------------------------------"
             << "Please select one option:\n"
             << "1. Sum a two numbers.\n"
             << "2. Substract a two numbers.\n"
             << "3. Multiplicate two numbers.\n"
             << "4. Division two numbers.\n"
             << "5. Exit.\n";

        cout << "Option: ";
        cin >> option;

        if (option == 1) {
            cout << "Insert the first number" << endl;
            cin >> number1;
            cout << "Insert the second number" << endl;
            cin >> number2;

            cout << "\nAlright, the result is: " + sum(number1, number2) << endl;
        }
        if(option == 2) {
            cout << "Insert the first number" << endl;
            cin >> number1;
            cout << "Insert the second number" << endl;
            cin >> number2;

            cout << "\nAlright, the result is: " + substract(number1, number2) << endl;
        }
        if(option==3) {
            cout << "Insert the first number" << endl;
            cin >> number1;
            cout << "Insert the second number" << endl;
            cin >> number2;

            cout << "\nAlright, the result is: " + multiplication(number1, number2) << endl;
        }
        if(option==4) {
            cout << "Insert the first number" << endl;
            cin >> number1;
            cout << "Insert the second number" << endl;
            cin >> number2;

            cout << "\nAlright, the result is: " + division(number1, number2) << endl;
        }
        if(option==5) {
            break;
        } else {
            cout << "Please, select a correct option";
        }
    }

    return 0;
}