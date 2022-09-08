// Question 21
// A numeric palindrome is any number that can be read in both directions, that is from left to right and from right to left to give the same value. For example, 13533531 is a numeric palindrome. Write down a computer solution that can accept an n-digit integer number (not necessarily a numeric palindrome) and find an n-digit number, M when appended to the original number would make it a numeric palindrome.

#include <iostream>
using namespace std;
int main()
{
    int Number, lastDigit, newNumber, M = 0;
    cout << "Enter the number: ";
    cin >> Number;
    newNumber = Number;

    while (newNumber != 0)
    {
        lastDigit = newNumber % 10;
        M = M * 10 + lastDigit;
        newNumber /= 10;
    }
    cout << "Palindrome: " << newNumber << M << endl;
    return 0;
}
