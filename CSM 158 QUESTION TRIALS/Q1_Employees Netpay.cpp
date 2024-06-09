 /*
  Employees of JB and Sons Consultants Ltd are paid on an hourly basis at the end of every week. If an employee works for not more than 40 hours a week, it is considered regular and Overtime for hours worked in excess of 40. Regular hours are paid at 500 cedis and 550 cedis per hour for males and females respectively while the overtime rate is one and half times the regular rate per hour for the different sexes. All employees are to pay 15% of their gross pay as Income Tax, 2.5% as National Health Contribution Levy, 1% as District Tax. Employees who have more than three children are to pay 10 and 20 cedis per child in excess of three towards Educational Fund For All for males and females respectively. Devise a computer solution that can be used to calculate the Net Pay of employees.
  */

#include <iostream>
using namespace std;

int main(){
    string gender;
    int NumChildren, HoursWorked, EmployeeNum;
    double CurrentPay;
    
    cout << "Input number of Employees: ";
    cin >> EmployeeNum;
    cout << endl;
    
    while (EmployeeNum != 0) {
        cout << "Input your gender: ";
        cin >> gender;
        cout << endl;
        
        cout << "Input number of hours worked: ";
        cin >> HoursWorked;
        cout << endl;
        
        
        // Calculate Gross Pay based on gender and hours worked
        if (HoursWorked <= 40 ) {
            if (gender == "male") { CurrentPay = 500 * HoursWorked; }
            else { CurrentPay = 550 * HoursWorked; }
        }
        else {
            if (gender == "male") { CurrentPay = 1.5 * 500 * HoursWorked; }
            else { CurrentPay = 1.5 * 550 * HoursWorked; }
        }
        
        
        // Deduct Taxes from Netpay
        CurrentPay = CurrentPay - (0.185 * CurrentPay);
        
        
        // Check for Number of Children and Deduct Child Wellfare
        cout << "Input number of children you have: ";
        cin >> NumChildren;
        cout << endl;
        
        if (NumChildren > 3) {
            cout << "Input number of male children: ";
            cin >> HoursWorked;
            cout << endl;
            
            CurrentPay = CurrentPay - (HoursWorked * 10 + (NumChildren - HoursWorked) * 20 );
        }
        
        
        // Output Results
        cout << "Your Net Pay is Gh₵" << CurrentPay << endl;
        cout << endl;
        
        EmployeeNum -= 1;
        
    }
    
}
