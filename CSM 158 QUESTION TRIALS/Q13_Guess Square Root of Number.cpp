/*
 The square root of a number N can be approximated by a repeated calculation
 using the following formula.
                         NewGuess = 0.5(LastGuess + N /LastGuess)
                                 
where NewGuess is the next guess and LastGuess the last guess. The
 calculation of a NewGuess should be terminated when the absolute value of
 the difference between the NewGuess and the LastGuess is about 0.0000001.
 Write down a computer solution for the above formula. You may use the
 function ABS(x) or '|x|'  to obtain the absolute value of x.
 */

#include <stdio.h>
#include <cmath>
#include <iostream>

using namespace std;

double GetNewGuess(double LastGuess, double N);

int main() {
    double N, LastGuess, NewGuess, difference;
    
    cout << "Input the Number you want to find the square root of: ";
    cin >> N;
    
    cout << "Guess what the square root will be: ";
    cin >> LastGuess;
    
    do {
        
        NewGuess = GetNewGuess(LastGuess, N);
        difference = abs(NewGuess - LastGuess);
        LastGuess = NewGuess;
        
    } while (difference > 0.0000001);
    
    cout << "The square root of " << N << " is " << NewGuess << endl;
    
    return 0;
}

double GetNewGuess(double LastGuess, double N){
    return 0.5 * (LastGuess + (N / LastGuess));
}
