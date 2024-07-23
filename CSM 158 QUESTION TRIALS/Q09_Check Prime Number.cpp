/*
 A prime number may be defined as any number that has only
 two factors, the digit 1 and the number itself. Using this
 definition, write down a computer solution that can allow a
 number to entered as input and output a message indicating
 whether or not the given number is a prime. Do not assume
 any pre-defined function.
 */


#include <iostream>
using namespace std;

int main() {
    int Number;
    
    cout << "Enter a number to check: ";
    cin >> Number;
    
    // Any number less than 2 can't be a prime number.
    // If a number < 2 is given, the program outputs "it isn't a prime" and ends by returning 0
    if (Number <= 1) {
        cout << Number << " is not a Prime Number!" << endl;
        return 0;
    }
    
    // Checks if the number has any other factors aside 1 and the number itself. If has any other factor it say "is not prime" and return 0 to terminate program
    for (int i=2; i<=Number/2; i++) {
        
        if (Number % i == 0) {
            cout << Number << " is not prime" << endl;
            return 0;
        }
    }
    
    // If all above conditions aren't met then the number is definitely a prime number
    cout << Number << " is a prime number" << endl;
    return 1;
}
