/*
 Devise a computer solution that can be used to find the position of the last occurrence of a given number
 from a  given set of input. You may 'dry run' your solution with the following test data.
 0 2 4 2 5 6 8 2 6 3 4 5 6 3 2 2 7 8 9 1 2 2 1. Let 2 be the number that we want to find the position of its
 last occurrence (this should be 22)

 */

# include <iostream>
using namespace std;

int main() {
    // There are two ways to do this. 1. Using an Array to store the set 2. Without Using an Array. We'll do both
    
    char UserInput;
    
    cout << "Would you like to use an array? (Y/N): ";
    cin >> UserInput;
    // I only use this to create blank lines when running code for easy readability
    cout << endl;
    
    
    // If you choose to use an array we use this code
    if (UserInput == 'Y' || UserInput == 'y') {
        
        // Declare needed variables
        int NumOfNumbers, NumWanted, last_occurence=0;
        
        // Get the number of numbers(integers) that will be in the given set of numbers
        cout << "How many numbers will be in your set of input?: ";
        cin >> NumOfNumbers;
        cout << endl;
        
        // Create an array with a size determined by the user's input
        int array[NumOfNumbers];
        
        // Allow the user to input all the values to be stored in the array one at a time.
        //NB: Counting in programming starts from 0. The five storage slots in the array are lablled 0,1,2,3,4
        for (int i=0; i<=NumOfNumbers-1; i++) {
            cout << "Enter an array value: ";
            cin >> array[i];
        }
        
        cout << endl;
        cout << "Which number's last occurence do you want to find?: ";
        cin >> NumWanted;
        cout << endl;
        
        // Loops through the entire array. Checks if number wanted is same as current item at position 'i' in the array. If yes, store 'i' as the last occurence.
        for (int i=0; i<=NumOfNumbers; i++) {
            if (NumWanted == array[i]) { last_occurence = i; }
        }
        
        cout << "The last occurence of " << NumWanted << " is at index position " << last_occurence << endl;
        cout << endl;
    }
    
    // The following code is used if the user decides not to use an array
    else {
        // Variables needed
        int NumOfNumbers, NumWanted, LastOccurence=0, Num;

        // Input number of numbers in the set to be inputter
        cout << "How many numbers are in the input set?: ";
        cin >> NumOfNumbers;
        cout << endl;
        
        cout << "Which number's last occurence do you want to find?: ";
        cin >> NumWanted;
        cout << endl;
        
        
        // User inputs each number in the set one at a time and it's temporarily stored in variable Num until it is overwritten when the loop starts again
        for (int i=0; i<=NumOfNumbers-1; i++) {
            cout << "Input a number in the set: ";
            cin >> Num;
            
            // Checks if number wanted is same as current number inputed at position 'i'.  If yes, store 'i' as the last occurence.
            if (Num == NumWanted) { LastOccurence = i; }
        }
        
        cout << endl;
        cout << "The last occurence of " << NumWanted << " is at index position " << LastOccurence << endl;
        cout << endl;
    }
}

// Both process will produce expected results. Use whichever method you feel suits you best
