//
//  mivogt2-2.cpp
//  hw 1
//
//  Created by Mikayla Vogt on 9/6/21.
//

#include "mivogt2-2.hpp"

#include <iostream>
using namespace std;
int main() {
    int  n;
    cout << "Enter the year to be tested: ";
    cin >> n;
    if(n%4==0){
        if (n%100 ==0){
            if (n%400==0)
                cout << n << " is a leap year\n";
            else
                cout << n << " Nope, it's not a leap year\n";
        }
        else
            cout << n << " is a leap year\n";
        
    }
    else
        cout << n << " Nope, it's not a leap year\n";
    
    return 0;
}
