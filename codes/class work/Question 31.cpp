// Question 31
// When one takes a loan, there are a number of repayment methods that one can adopt to pay the loan within a reasonable time. One of such methods is to use the formula RP=(Ar(1+r/100)^n)/((1+r/100)^n-1)   where PR is the monthly repayment amount, A is the amount borrowed, r is the monthly interest rate and n is the number of months the loan is to be paid back.  Write a computer solution that can be used to calculate and display the monthly repayments until the loan is fully paid back. Your input should be the amount borrowed, the annual interest rate and the number of years the loan is to be paid back.  The output should have the following layout

// 	Month		Repayment	Balance Outstanding
// 	    1	    xxxxxxx.xx	      xxxxxxxxxx.xx
// 	    2	          :			:
// 	    :	          :			:
// 	    m 		 xxxxx.xx		0

#include <iostream>
using namespace std;
int main()
{
    double amount, rate, n, monthly, balance;
    cout << "Enter the amount borrowed: ";
    cin >> amount;
    cout << "Enter the annual interest rate: ";
    cin >> rate;
    cout << "Enter the number of years the loan is to be paid back: ";
    cin >> n;
    monthly = amount * rate / 1200;
    balance = amount;
    cout << "Month\tRepayment\tBalance Outstanding" << endl;
    for (int i = 1; i <= n * 12; i++)
    {
        cout << i << "\t" << monthly << "\t" << balance << endl;
        balance = balance - monthly;
    }
    return 0;
}