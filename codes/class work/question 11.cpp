// Question 11:
// Without using the division (/) devise a c++ code that can be used to m goes into n as well as the remainder. The values for m and n will be read as inputs.
#include <iostream>
using namespace std;
int main()
{
    int m, n, r;
    cout << "Enter the value of m: ";
    cin >> m;
    cout << "Enter the value of n: ";
    cin >> n;
    r = m % n;
    cout << "The remainder is: " << r << endl;
    return 0;
}