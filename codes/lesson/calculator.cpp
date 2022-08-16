// c++ code for a calculator
#include <iostream>
using namespace std;
// a function to add 2 numbers
int Add(int a, int b)
{
    return a + b;
}
// a function to multiply 2 numbers
int Multiply(int a, int b)
{
    return a * b;
}
// a function to divide 2 numbers
int Divide(int a, int b)
{
    return a / b;
}
// a function to subtract 2 numbers
int Subtract(int a, int b)
{
    return a - b;
}
// a function to modulo 2 numbers
int Modulo(int a, int b)
{
    return a % b;
}

int main()
{
    int a, b;
    char opp;
    cout << "Please pick one of the operations (Enter the number)" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "5. Modulo" << endl;
    cout << endl;
    cout << "Enter your choice: ";
    cin >> opp;

    // taking input for both numbers
    cout << "Enter two numbers" << endl;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    // checking the operation
    int results;
    if (opp == '1')
    {
        results = Add(a, b);
    }

    if (opp == '2')
    {
        results = Subtract(a, b);
    }
    if (opp == '3')
    {
        results = Multiply(a, b);
    }
    if (opp == '4')
    {
        results = Divide(a, b);
    }
    if (opp == '5')
    {
        results = Modulo(a, b);
    }

    cout << "The result is: " <<results;
}