/*
 Devise a computer solution that reads in a positive integer n and then prints the sum of the first n
 even integers and the sum of the first n odd numbers.
 */

# include <iostream>
using namespace std;

int main(){
    //NB: cout << endl; is just used to create blank lines to make running code look cleaner
    
    int n, EvenSum=0, OddSum=0;
    
    cout << "Input a positive integer: ";
    cin >> n;
    cout << endl;
    
    // Gets first n even integers, sums and stores in variable EvenSum
    cout << "The first " << n << " even numbers are ";
    for (int i=0; i<=n*2-2; i+=2) {
        cout << i << ", ";
        EvenSum += i;
    }
    
    cout << endl;
    cout << endl;
    
    // Gets first n odd integers, sums and stores in variable OddSum
    cout << "The first " << n << " odd numbers are ";
    for (int i=1; i<=n*2; i+=2) {
        cout << i << ", ";
        OddSum += i;
    }
    
    cout << endl;
    cout << endl;
    
    // Output Results for user
    cout << "The sum of the first " << n << " even numbers is " << EvenSum << endl;
    cout << "The sum of the first " << n << " odd numbers is " << OddSum << endl;
    
    cout << endl;
    return 0;
}
