#include <iostream>
using namespace std;
// a function to calculate the sum of 2 numbers
int Anna(int a, int b)
{
    return a + b;
}
// a function to multiply 2 numbers
int Anna2(int a, int b)
{
    return a * b;
}
int main()
{
    cout << "function to add 2 numbers: ";
    cout << Anna(4, 2);
    cout << endl;

    cout << "function to multiply 2 numbers: ";
    cout << Anna2(4, 2);
    return 0;
}
