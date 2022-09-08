// Question 5
// Devise a computer solution that reads in a positive integer n and then prints the sum of the first n even integers and the sum of the first n odd numbers.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, sum_even = 0, sum_odd = 0;

    cout << "Enter the number: ";
    cin >> n;
    if (n > 0)
    {
        sum_even = n * (n + 1);
        sum_odd = pow(n, 2);
    }

    cout << "The sum of the first " << n << " even integers is " << sum_even << endl;
    cout << "The sum of the first " << n << " odd numbers is " << sum_odd << endl;
    return 0;
}