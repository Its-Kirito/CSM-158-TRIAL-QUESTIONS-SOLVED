/*
 A prime number may be defined as any number that has only
 two factors, the digit 1 and the number itself. Using this
 definition, write down a computer solution that can allow a
 number to entered as input and output a message indicating
 whether or not the given number is a prime. Do not assume
 any pre-defined function.
 */
//

#include <iostream>
using namespace std;

int main() {
    int Number;
    bool is_prime=false;
    
    cout << "Enter a number to check: ";
    cin >> Number;
    
    for (int i=2; i<=Number; i++) {
        if (i != Number && Number % i == 0) {
            is_prime = false;
            break;
        }
        else {
            is_prime = true;
        }
    }
    
    if (is_prime) {
        cout << Number << " is a prime number" << endl;
    }
    else {
        cout << Number << " is not a prime number" << endl;
    }
}
