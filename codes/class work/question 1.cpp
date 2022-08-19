// Employees of JB and Sons Consultants Ltd are paid on an hourly basis at the end of every week. If an employee works for not more than 40 hours a week, it is considered regular and Overtime for hours worked in excess of 40. Regular hours are paid at 500 cedis and 550 cedis per hour for males and females respectively while the overtime rate is one and half times the regular rate per hour for the different sexes. All employees are to pay 15% of their gross pay as Income Tax, 2.5% as National Health Contribution Levy, 1% as District Tax. Employees who have more than three children are to pay 10 and 20 cedis per child in excess of three towards Educational Fund For All for males and females respectively. Devise a c++ solution that can be used to calculate the Net Pay of employees.

#include <iostream>
#include <string>
using namespace std;
int main (){
    double overTimeRateMal, overTimeRateFem, regularRateMal = 500, regularRateFem = 550, hoursWorked, numOfChildren, grossPay;
    char gender;
    overTimeRateMal = 1.5 * regularRateMal;
    overTimeRateFem = 1.5 * regularRateFem;

    cout << "Enter the number of hours worked: ";
    cin >> hoursWorked;
    cout << "Enter gender (M or F): ";
    cin >> gender;
    cout << "Enter the number of children: ";
    cin >> numOfChildren;

    if (gender == 'M'){
        if (hoursWorked <= 40){
            grossPay = hoursWorked * regularRateMal;
        }
        else{
            grossPay = 40 * regularRateMal + (hoursWorked - 40) * overTimeRateMal;
        }
    }
    else{
        if (hoursWorked <= 40){
            grossPay = hoursWorked * regularRateFem;
        }
        else{
            grossPay = 40 * regularRateFem + (hoursWorked - 40) * overTimeRateFem;
        }
    }
    double IncomeTax = 0.15 * grossPay, NHIlevy = 0.025 * grossPay, DistrictTax = 0.01 * grossPay, EduFund;

    if (numOfChildren > 3){
        if (gender == 'M'){
            EduFund = 10 * (numOfChildren - 3);
        }
        else{
            EduFund = 20 * (numOfChildren - 3);
        }
    }else
        EduFund = 0;

        double netPay = grossPay - IncomeTax - NHIlevy - DistrictTax - EduFund;

        cout << "Gross Pay: Ghc" << grossPay << endl;
        cout << "Income Tax: Ghc" << IncomeTax << endl;
        cout << "NHI Levy: Ghc" << NHIlevy << endl;
        cout << "District Tax: Ghc" << DistrictTax << endl;
        cout << "Educational Fund: Ghc" << EduFund << endl;
        cout << "______________NET PAY______________"<<endl;
        cout << " Ghc" << netPay << endl;

        return 0;
}