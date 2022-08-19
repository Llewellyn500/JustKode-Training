// Question 40
// Some banks in the country use a very complicated way of granting loans. For example, if a customer applies for a loan of 1000 cedis at an interest rate of 15% over a period of 18 months for repayment, the interest is calculated as 1000 * 0.15 * 1.5 to give 225 cedis. The interest is immediately deducted from the face value of 1000, leaving the customer with only 775 cedis. Repayment is made in equal installments based on the face value. So, the monthly loan payment will be 1000 divided by 18 months, which is  55.56 cedis. The method of calculation would have been fair if the customer was actually looking for a loan of 775 but the customer receives 775 instead of 1000. Devise a computer solution based on the above method that will ensure that if a customer wants a loan of 1000 cedis in his/her pocket he applies for an amount that will give him exactly that. Thus, your computer solution should read as input the amount a user wants in his/her pocket, the repayment period and the interest rate. The output should be the total loan and the monthly installments.

#include <iostream>
using namespace std;
int main(){
    double amount;
    int period;
    double interest;
    cout << "Enter the amount: ";
    cin >> amount;
    cout << "Enter the period: ";
    cin >> period;
    cout << "Enter the interest: ";
    cin >> interest;
    double interestAmount = amount*interest/100;
    double principalAmount = amount-interestAmount;
    double monthlyPayment = principalAmount/period;
    double totalLoan = monthlyPayment*period;
    cout << "The total loan is " << totalLoan << endl;
    cout << "The monthly payment is " << monthlyPayment << endl;
    return 0;
}