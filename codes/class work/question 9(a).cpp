// Question 9
// (a)	A prime number may be defined as any number that has only two factors, the digit 1 and the number itself. Using this definition, write down a computer solution that can allow a number to entered as input and output a message indicating whether or not the given number is a prime. Do not assume any pre-defined function.

#include <iostream>
using namespace std;
int main()
{
    int n, i, flag = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << n << " is not a prime number";
    }
    else
    {
        cout << n << " is a prime number";
    }
    return 0;
}

