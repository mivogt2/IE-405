//
//  mivogt2_3.cpp
//  hw 1-3
//
//  Created by Mikayla Vogt on 9/6/21.
//

#include "mivogt2_3.hpp"
#include <iostream>
using namespace std;
int main(){
    double v1,v2,result = 0;
    char op;
    int a,b;
    //type in your first value
    cout << "Type in a simple expression starting with 1 number\nValue 1: ";
    cin >> v1;

    // take operator, check if valid
    cout << "Enter an operator, only +,-,*,/,% allowed: ";
    cin >> op;
    while (op != '+' && op != '-' && op != '/' && op != '*' && op != '%'){
        cout << "This operator is not accepted\nEnter an operand, only +,-,*,/,% allowed ";
        cin >> op;}

    //  take value 2 and check for divide by zero
    cout << "Value 2: ";
    cin >> v2;
    while (op == '/' && v2 == 0){
        cout << "Cannot divide by zero, please enter a nonzero value";
        cout << "\nValue 2: ";
        cin >> v2;
    }

    //switch for each case
    switch (op) {
    case '+':
        result = v1 + v2;
        break;
    case '-':
        result = v1 - v2;
        break;
    case '*':
        result = v1 * v2;
        break;
    case '/':
        result = v1 / v2;
        break;
    case '%':
        a = int(v1);
        b = int(v2);
        result = a % b;
        break;
    }

    cout << "Your answer is " << result;
    // cout << "\ndid this work";
    return 0;
    
    }

    
