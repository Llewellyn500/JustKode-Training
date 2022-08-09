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
// a function that takes a name as a parameter and print hello plus that name
void Anna3(string name)
{
    cout << "Hello " << name << endl;
}


int main()
{
    cout << "function to add 2 numbers: ";
    cout << Anna(4, 2);
    cout << endl;

    cout << "function to multiply 2 numbers: ";
    cout << Anna2(4, 2);
    cout << endl;

    // calling the function Anna3
    Anna3("Anna");
    return 0;
}


