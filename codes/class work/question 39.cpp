// Question 39
// Write a detailed computer solution that can be used to accept as input any amount in dollars and display the number such that thousands are separated by commas. For example, an input of 1234567.78 should be displayed as 1,234,567.78.

// Dennis Simplified Solution
#include <iostream>
#include <string>
using namespace std;
int main()
{
    double amount, mantissa;
    int intAmount, lastDigit, intMantissa, i = 0;
    cout << "Enter the amount: ";
    cin >> amount;
    intAmount = amount;
    mantissa = amount - intAmount;
    mantissa *= 100;
    string strAmount = ".";
    while (intAmount > 0)
    {
        lastDigit = intAmount % 10;
        strAmount = to_string(lastDigit) + strAmount;
        intAmount / +10;
        i++;
        if (intAmount > 0)
        {
            if (i % 3 == 0)
                strAmount = ',' + strAmount;
        }
    }
    intMantissa = mantissa;
    if (mantissa > 9)
        cout << "Amount with comma: " << strAmount << intMantissa;
    else
        cout << "Amount with comma: " << strAmount << "0" << intMantissa;
    return 0;
}

// My Solution
//  #include <iostream>
//  #include <string>
//  #include <locale>
//  #include <iomanip>
//  using namespace std;
//  struct group_thousands : numpunct<char>
//  {
//      string do_grouping() const override { return "\3"; }
//  };

// int main()
// {
//     cout.imbue(locale(cout.getloc(), new group_thousands));
//     cout << fixed << setprecision(2) << endl;
//     double amount;
//     cout << "Enter amount: ";
//     cin >> amount;
//     cout << "Ghc " << amount << '\n';
// }
