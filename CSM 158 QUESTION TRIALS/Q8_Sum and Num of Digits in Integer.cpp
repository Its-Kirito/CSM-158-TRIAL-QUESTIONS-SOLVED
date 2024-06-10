/*
 Write a computer solution that accepts as input an integer
 value and then output the sum of the digits in the number
 as well as the number of digits it has with appropriate
 captions.
 */

# include <iostream>
using namespace std;

int main() {
    // Initialize required variables
    int InputInteger, Sum=0, NumOfNum=0;
    
    cout << "Input an integer value: ";
    cin >> InputInteger;
    cout << endl;

    // Loop through each digit in the integer, counts them and sums them up. Involves some math but it's not too tricky
    while (InputInteger != 0) {
        Sum += InputInteger % 10;
        NumOfNum += 1;
        InputInteger = InputInteger / 10;
    }
    
    cout << "The sum of the digits is " << Sum << " and there are " << NumOfNum << " numbers in it" << endl;
    
    return 0;
}
