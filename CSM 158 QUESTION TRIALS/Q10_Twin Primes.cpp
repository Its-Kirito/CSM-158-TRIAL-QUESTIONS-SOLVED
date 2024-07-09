/*
 If p and q are both primes and q=p+2, then the pair p,q are called twin primes. For example, 5,7 are twin primes. Devise a computer solution to list all twin primes that are less than a positive integer n.
 
 */


#include <iostream>
#define create_space cout<<endl;
using namespace std;

// Define a Fxn that checks if a number is a prime number
int check_if_prime(int value){
    
    if (value <= 1) {
        // Numbers less than or equal to 1 are not prime numbers so return 0
        return 0;
    }
    
    // Checks if the value has any other divisor aside 1 and the number itself. If it has return 0
    for (int j = 2; j <= value / 2; ++j) {
        if (value % j == 0) {
            return 0;
        }
    }
    
    // If all of the above conditions aren't met then the number is a prime number. Return the value inputted
    return value;
};


int main(){
    int end_integer, prime1, prime2;
    
    // Get the integer where we should stop our program
    cout << "Input the stopping integer: ";
    cin >> end_integer;
    
    // Loops through all numbers starting from 2 to that end integer value. (anything less than 2 isn't prime)
    for (int i=2; i <= end_integer; ++i) {
        
        // Passes i into the fxn to check if it's prime
        prime1 = check_if_prime(i);
        
        if (prime1 != 0) {
            prime2 = check_if_prime(i+2);
            
            if (prime2 != 0) {
                cout << prime1 << ',' << prime2 << " are twin primes!" << endl;
                create_space
            }
        }
        
        continue;
    }
    
}
