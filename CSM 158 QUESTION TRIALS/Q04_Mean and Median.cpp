/*
 Question 4
 Device a computer solution that can be used to compute the median and the mean of a set of numbers given
 that the numbers have already been arranged in decreasing order of magnitude.
 */

# include <iostream>
using namespace std;

int main() {
    // Declare variables we'll need
    int NumOfNumbers, position;
    
    cout << "How many numbers are being provided?: ";
    cin >> NumOfNumbers;
    
    // Array to store set of numbers and variables to store mean and median values
    double array[NumOfNumbers], Mean=0, Median=0;
    
    
    /* CALCULATE THE MEAN */
    // Allow user to input numbers into array
    for (int i=0; i<=NumOfNumbers-1; i++) {
        cout << "Input the given descending ordered numbers: ";
        cin >> array[i];
        
        // Sums each input and stores it in Mean Variable. Creating a new variable to store the sum isn't neccessary but can be done.
        Mean += array[i];
    }
    
    // Calculates Mean (Sum/NumOfNums) and stores it in Mean Variable
    Mean = Mean/NumOfNumbers;
    
    
    /* CALCULATE THE MEDIAN */
    if (NumOfNumbers % 2 != 0) {
        // When NumOfNumbers is ODD, the median is the value at the (n+1)/2th position
        // NB: Array Indexing starts from 0 that is why we use position-1
        position = (NumOfNumbers + 1) /2;
        Median = array[position-1];
    }
    else {
        // When NumOfNumbers is EVEN, median is the average of the two middle numbers
        //NB: Don't forget array indexing starts from 0
        position = array[(NumOfNumbers/2)-1] + array[(NumOfNumbers/2)] ;
        Median = position/2.0;
    }
    
    cout << endl;
    
    // Output Final Results
    cout << "The mean value is " << Mean << endl;
    cout << "The median value is " << Median << endl;
}
