/*
 Devise a computer solution that interchanges the values of two variables, X and Y. The original values of X and Y will be entered via the keyboard. Test your solution with initial values of X and Y being 10 and 20 respectively. At the end of the test, do you have X and Y to be 20 and 10 respectively? If yes then your computer solution may be correct.
 */

#include <iostream>
using namespace std;

int main() {
    // First we initialize the requested variables
    int x, y, z;
    
    cout << "Input an integer value for variable X: ";
    cin >> x;
    
    cout << "Input an integer value for variable Y: ";
    cin >> y;
    cout << endl;
    
    cout << "Variable X contains: " << x << " and variable Y contains: " << y << endl;
    
    // Interchanges variable x and y's values by using variable z as middle man
    z = x;
    x = y;
    y = z;
    
    cout << "Variable X now contains: " << x << " and variable Y now scontains: " << y << endl;
}
