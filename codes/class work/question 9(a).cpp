// Question 9
// (a)	A prime number may be defined as any number that has only two factors, the digit 1 and the number itself. Using this definition, write down a computer solution that can allow a number to entered as input and output a message indicating whether or not the given number is a prime. Do not assume any pre-defined function.

#include <iostream>
using namespace std;
int main()
{
    int number, numOfFactors = 0;
    cout << "Enter a number: ";
    cin >> number;
    for (int i = 1; i <= 10; i++)
    {
        if (number % i == 0)
        {
            numOfFactors++;
        }
    }
    if (numOfFactors == 2)
    {
        cout << number << " is a prime number";
    }
    else
    {
        cout << number << " is not a prime number";
    }
    return 0;
}

