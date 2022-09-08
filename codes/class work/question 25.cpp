// Question 25
// Some three-digit numbers (in the range 100 to 999 inclusive)  have the characteristic that the sum of the cubes of the individual digits in a number equals to the number itself. A typical example of such a number is 153 (13 + 53 + 33  = 1 + 125 + 27 = 153). You are required to write down a computer solution for displaying all three digits numbers that have the above characteristics. Your computer solution should be written such that no inputs are to be entered from the keyboard.

#include <iostream>
using namespace std;
int main()
{
    int num;
    for (int i = 100; i <= 999; i++)
    {
        int num_copy = i;
        int sum = 0;
        while (num_copy != 0)
        {
            sum += pow(num_copy % 10, 3);
            num_copy /= 10;
        }
        if (sum == i)
        {
            cout << i << endl;
        }
    }
    return 0;
}