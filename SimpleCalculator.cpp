//  main.cpp
//  calculator
//
//  Created by Martin Kalliola on 16.11.2020.
//

#include <iostream>

using namespace std;

int main() {
    
    char op;
    float num1, num2;
    bool flag = true;
    
    while (flag == true) {
        
        cout << "Please type the operator: ";

        cin >> op;
        
        if (op == 'q') {
            
            cout << "Thank you for using my SimpleCalculator" << endl;
            flag = false;
        
    }
        
        else if (op == '-' || op == '+' || op == '*' || op == '/') {
    
    cout << "Type the first number ";
    cin >> num1;
            if (cin.fail()) {
                cout << "Numbers only plzz" << endl;
                cin.clear();
            }
        
    cout << "Type the second number ";
    cin >> num2;
        if (cin.fail()) {
            cout << "Numbers only plzz" << endl;
            cin.clear();
        
        }
            
    
    switch (op) {
        case '+':
            cout << "The result is: " << num1 + num2 << endl;
            break;
            
        case '-':
            cout << "The result is: " << num1 - num2 << endl;
            break;
            
        case '/':
            if (num2 != 0)
            cout << "The result is: " << num1 / num2 << endl;
            else
                cout << "Error, cannot divide by 0" << endl;
            break;
            
        case '*':
            cout << "The result is: " << num1 * num2 << endl;
            break;
            
        default:
            cout << "Error, big error... Nothing to calculate.";
            break;
            }
        
        }
    }
    return 0;
}
