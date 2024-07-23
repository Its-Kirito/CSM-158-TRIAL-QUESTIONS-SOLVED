/*
 Write down a computer solution that can be used to count the number of times a particular
 digit appears in an (integer) input. Hint you may assume that there is an operator % that
 returns the remainder when one integer is divided by another and has the syntax a %b
 where a and b are integer constants.
 */

//WARNING: Inputting Extremely Large Values Can Cause Errors. I'm still learning and don't know why yet but if you can resolve it please go ahead.😁

#include <iostream>
using namespace std;

int main() {
    int InputInteger, Counter=0, NumWanted;
    cout << "Input any integer value: ";
    cin >> InputInteger;
    cout << endl;
    
    cout << "Input a digit you want to count: ";
    cin >> NumWanted;
    cout << endl;

    
    // Loop through each digit in the integer, counts them and sums them up. Involves some math but it's not too tricky
    while (InputInteger != 0) {
        if (InputInteger % 10 == NumWanted) {
            Counter += 1;
        }
        
        InputInteger = InputInteger / 10;
    }

    cout << "The digit " << NumWanted << " appears " << Counter << " times!" << endl;
    
    return 0;
}
