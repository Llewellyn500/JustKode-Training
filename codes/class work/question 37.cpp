// Question 37
// In addition to the methods described in questions 36 and 37 for calculating depreciation, one can also use the double-declining balance method. If the amount is the value of the asset and years years is the number of years the asset is to be depreciated, then 2/years times the undepreciated amount is depreciated every year. Since only a fraction of the undepreciated amount is depreciated, the entire amount will never be depreciated fully. One way of solving this problem is therefore to switch over to the straight-line method.  You are required to devise 
// a computer solution that accepts as input amount, years and switch (the year in which to switch to the straight-line method) and then display the depreciation and the outstanding amount for the different years.

#include <iostream>
using namespace std;
int main()
{
    double amount, years, switch_year, depreciation, outstanding;
    cout << "Enter the amount: ";
    cin >> amount;
    cout << "Enter the number of years: ";
    cin >> years;
    cout << "Enter the year in which to switch to the straight-line method: ";
    cin >> switch_year;
    depreciation = amount / years;
    outstanding = amount;
    for (int i = 1; i <= years; i++)
    {
        if (i <= switch_year)
        {
            outstanding -= depreciation;
        }
        else
        {
            outstanding -= (amount / (years * 2));
        }
        cout << "Year " << i << ": " << depreciation << endl;
        cout << "Outstanding: " << outstanding << endl;
    }
    return 0;
}