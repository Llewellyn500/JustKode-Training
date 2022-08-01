// Question 21
// A numeric palindrome is any number that can be read in both directions, that is from left to right and from right to left to give the same value. For example, 13533531 is a numeric palindrome. Write down a computer solution that can accept an n-digit integer number (not necessarily a numeric palindrome) and find an n-digit number, M when appended to the original number would make it a numeric palindrome.

//im not sure of the solution so 😝.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of digits: ";
    cin >> n;
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int num_copy = num;
    int num_copy_rev = 0;
    while (num_copy != 0)
    {
        num_copy_rev = num_copy_rev * 10 + num_copy % 10;
        num_copy /= 10;
    }
    int num_copy_rev_copy = num_copy_rev;
    int num_copy_rev_copy_rev = 0;
    while (num_copy_rev_copy != 0)
    {
        num_copy_rev_copy_rev = num_copy_rev_copy_rev * 10 + num_copy_rev_copy % 10;
        num_copy_rev_copy /= 10;
    }
    if (num_copy_rev_copy_rev == num)
    {
        cout << "The number " << num << " + " << num_copy_rev << " = " << num + num_copy_rev << endl;
    }
    else
    {
        cout << "The number " << num << " + " << num_copy_rev << " = " << num + num_copy_rev << " is not a numeric palindrome." << endl;
    }
    return 0;
}