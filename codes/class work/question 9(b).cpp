// Question 9(b)
// Given a positive integer, N, devise a computer solution that can be used to find another integer M whose factorial is N. For example if N is given as 720 then M should be 6.

#include <iostream>
using namespace std;
int main()
{
    int n, m = 1, fact = 1;

    cout << " Enter the number: ";
    cin >> n;

    while (fact < n)
    {
        fact *= m;
        m++;
    }
    if (fact == m)
        cout << m - 1 << "! = " << n << endl;
    else
        cout << "Incorrect Input value";
    return 0;
}
