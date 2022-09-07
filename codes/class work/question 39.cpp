// Question 39
// Write a detailed computer solution that can be used to accept as input any amount in dollars and display the number such that thousands are separated by commas. For example, an input of 1234567.78 should be displayed as 1,234,567.78.

#include <iostream>
#include <string>
#include <locale>
#include <iomanip>
using namespace std;
struct group_thousands : numpunct<char>
{
    string do_grouping() const override { return "\3"; }
};

int main()
{
    cout.imbue(locale(cout.getloc(), new group_thousands));
    cout << fixed << setprecision(2) << endl;
    double amount;
    cout << "Enter amount: ";
    cin >> amount;
    cout << "Ghc " << amount << '\n';
}
