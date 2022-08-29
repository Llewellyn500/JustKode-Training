// Write a program that finds the summation of every number from 1 to num. The number will always be a positive integer greater than 0.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }
    cout << "Sum of 1 to " << num << " is " << sum << endl;
}