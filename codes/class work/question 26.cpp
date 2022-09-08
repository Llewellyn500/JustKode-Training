// Question 26
// A prime number is any positive integer that is divisible by itself and the number 1. Write down a computer solution that can display as output all prime numbers less than or equal to 1000.
#include <iostream>
using namespace std;
int main()
{
    int i, j, numOfFactors;
    for (i = 2; i <= 1000; i++)
    {
        numOfFactors = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
                numOfFactors++;
        }
        if (numOfFactors == 2)
            cout << i << " is a prime number " << endl;
    }
    return 0;
}