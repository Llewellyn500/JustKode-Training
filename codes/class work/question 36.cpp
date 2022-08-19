// Question 36
// Another method of calculating depreciation is the straight-line method. If value is the value of the asset and it is to be depreciated over years years, then value/years is depreciated every year. Write a detailed computer solution that accepts as input values for value and years and then display the depreciation and the outstanding amount for the different years.

#include <iostream>
using namespace std;
int main()
{
    double value, years, depreciation, outstanding;
    cout << "Enter the value: ";
    cin >> value;
    cout << "Enter the number of years: ";
    cin >> years;
    depreciation = value / years;
    outstanding = value;
    for (int i = 1; i <= years; i++)
    {
        outstanding -= depreciation;
        cout << "Year " << i << ": " << depreciation << endl;
        cout << "Outstanding: " << outstanding << endl;
    }
    return 0;
}