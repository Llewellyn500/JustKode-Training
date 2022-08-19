// Question 35
// There are a number of methods that are used for calculating the depreciation of an asset. One commonly used method is the sum-of-the-years-digits. For example, consider equipment of value 15 million cedis required to be depreciated over 5 years. We first calculate the sum of the years' digits by adding 1, 2, 3, 4 and 5. Thus the sum-of-the-years-digits is 15. For the first year the amount of depreciation is  5/15 x15million (i.e. 5million), the second year will be 4/15 x15million (i.e. 4million), the third will be 3/15 x15million (i.e. 3million) and so forth. You are required to devise a computer solution to accept the value of an asset and the number of years of depreciation as inputs and output the year, the amount of depreciation starting with year 1 up to the year required and the balance outstanding at the end of each year under appropriate headings. 

#include <iostream>
using namespace std;
int main()
{
    int asset, years, i, sum, depreciated, balance;
    cout << "Enter the value of the asset: ";
    cin >> asset;
    cout << "Enter the number of years of depreciation: ";
    cin >> years;
    sum = 0;
    for (i = 1; i <= years; i++)
    {
        sum = sum + i;
    }
    depreciated = asset / sum;
    balance = asset;
    cout << "Year\tDepreciated\tBalance" << endl;
    for (i = 1; i <= years; i++)
    {
        cout << i << "\t" << depreciated << "\t" << balance << endl;
        balance = balance - depreciated;
    }
    return 0;
}