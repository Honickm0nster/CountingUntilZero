//
//  main.cpp
//  Assignment_3
//
//  Created by Noah Honickman on 1/30/21.
//This program prints out the cumulative sum of numbers entered until you enter 0 

#include <iostream>
using namespace std;
int main() {
    int sum = 0;
    int i;
    cout<< "Enter some numbers. You will get the cumulative sum every time you enter a number and the program will terminate when you enter 0\n";
    cin >>  i;
    while ( i != 0){
        sum = sum + i;
        cout << "The sum so far is " << sum << "\n";
        cout << "Enter another number.\n";
        cin>> i;
    }
    return 0;
}
