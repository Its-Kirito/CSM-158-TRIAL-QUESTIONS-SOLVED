/*
 Given a positive integer, N, devise a computer solution that can be used to
 find another integer M whose factorial is N. For example if N is given as
 720 then M should be 6.
 */

#include <iostream>
using namespace std;

int main(){
    int Integer, factorial=1, num=0;
    
    cout << "Input the given integer: ";
    cin >> Integer;
    
    while (factorial != Integer) {
        num++;
        factorial = factorial * num;
    }
    
    cout << Integer << " = " << num << "!" << endl;
}
