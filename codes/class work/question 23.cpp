// Question 23
// Employees of  JB and SONS Consultants Limited are paid at an hourly rate of 25,000.00 cedis per hour for regular hours and one and one-half times per hour for overtime hours in a week. Any hour worked over forty hours per week is overtime. The following national tax sliding scale is then applied to determine the amount of tax to be paid by an employee. 
// GROSS PAY	TAX RATE (%)
// Below 125,001	0
// 125,001 – 250,000	5
// 250,001 – 1,750,000	10
// 1,750,001 – 2,750,000	15
// 2,750,001 – 5,000,000	20
// Over 5,000,000	30
// In addition, 6% of an employee's gross pay is withheld for Social Security or GUSSS contribution, 3% is withheld as constituency tax and 2% is withheld by the employer as welfare contribution. If an employee has more than three dependents then an amount of 5,000.00 cedis is paid for each dependent in excess of 3 towards National Health Insurance Scheme. The company has no more than 100 employees. You are required to write a computer solution for computing a worker's gross pay, the deductions and his/her net pay. Your computer solution should allow for a number of staff details to be entered for the necessary computations. 

#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double netPay, regularRate = 25000, overtimeRate = 1.5*regularRate;
    double grossPay, tax, SS, cTax, welfc, NHIS;
    int hoursWorked, numDependents;

    for (int i=1; i<=100; i++){
        cout << "Employee " << i << endl;
        cout << "Enter the number of hours worked: ";
        cin >> hoursWorked;
        cout << "Enter the number of dependents: ";
        cin >> numDependents;
        if (hoursWorked <= 40){
            grossPay = hoursWorked * regularRate;
        }
        else{
            grossPay = 40 * regularRate + (hoursWorked - 40) * overtimeRate;
        }
        if (grossPay >= 125001){
            if (grossPay <= 250000)
                tax = 0.05 * grossPay;
            else if (grossPay <= 1750000)
                tax = 0.1 * grossPay;
            else if (grossPay <= 2750000)
                tax = 0.15 * grossPay;
            else if (grossPay <= 5000000)
                tax = 0.2 * grossPay;
            else
                tax = 0.3 * grossPay;
        }
        else
            tax = 0;

            SS = 0.06 * grossPay;
            cTax = 0.03 * grossPay;
            welfc = 0.02 * grossPay;

            if (numDependents > 3)
                NHIS = 5000 * (numDependents - 3);
            else
                NHIS = 0;

            netPay = grossPay - tax - SS - cTax - welfc - NHIS;

            cout << showpoint << setprecision(8);
            cout << "Tax: Ghc" << tax << endl;
            cout << "Constituency Tax: Ghc" << cTax << endl;
            cout << "Social Security: Ghc" << SS << endl;
            cout << "Welfare Contribution: Ghc" << welfc << endl;
            cout << "National Health Insurance Scheme: Ghc" << NHIS << endl;
            cout << "Gross Pay: Ghc" << grossPay << endl;
            cout << "...........Net Pay..........." << endl;
            cout << "       Ghc " << netPay << endl;
    }
    return 0;
}