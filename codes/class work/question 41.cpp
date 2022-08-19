// Question 41
// A newly established company, KKF Ltd sells electronic equipment to customers on a negotiable credit plan. For example, if a piece of equipment sells at 1000 cedis at an interest rate of 18% (i.e 1.5% per month) and a monthly payment of 50 cedis, no down payment is required, however, the monthly payment is used to pay the interest and whatever is left is used to pay part of the remaining debt. Thus, for the first month, an amount of 1.5% of 1000 in interest (that is 15 cedis). The remaining 35 (that is 50-15) cedis is used to pay part of the 1000 cedis which leaves the customer with a debt of 965 cedis. For the next month, the interest will be 1.5% of 965, which is 14.48. Thus, 35.52 (50-14.48) cedis is deducted from the debt of 965 leaving the debt as 929.48. The process is repeated until the full amount is paid. Please note that for the last month the balance plus the interest  may be less than 50 cedis yet the company will demand the full 50 cedis. Devise a computer solution to read as input the value of the equipment, the interest rate, the period of repayment and the monthly payment amount,  and output the outstanding balances from the 1st month to the last month.

#include <iostream>
using namespace std;
int main(){
    double equipment;
    double interest;
    int period;
    double monthlyPayment;
    cout << "Enter the value of the equipment: ";
    cin >> equipment;
    cout << "Enter the interest rate: ";
    cin >> interest;
    cout << "Enter the period of repayment: ";
    cin >> period;
    cout << "Enter the monthly payment: ";
    cin >> monthlyPayment;
    double balance = equipment;
    for(int i = 1; i <= period; i++){
        double interestAmount = balance*interest/100;
        double principalAmount = monthlyPayment-interestAmount;
        balance = balance-principalAmount;
        cout << "Month " << i << ": " << balance << endl;
    }
    return 0;
}