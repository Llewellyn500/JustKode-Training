// Question 38
#include <iostream>
#include <cmath>
using namespace std;

void getinput();
double addx();
double addy();
double addxsquare();
double addxy();
double arrx[100], arry[100];
int n;

int main()
{
    int a, b, y;
    getinput();

    b = (addxy() - ((addx() * addy()) / n)) / ((addxsquare() - pow(addx(), 2)) / n);
    a = (addy() - b * addx()) / n;
    cout << "y = " << a << "x +" << b << endl;
    return 0;
}

void getinput()
{
    cout << "Enter the total number of numbers " << endl;
    cin >> n;
    cout << "Enter your x values " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "[" << i << "]";
        cin >> arrx[i];
    }
    cout << "Enter your y values " << endl;
    for (int j = 0; j < n; j++)
    {
        cout << "[" << j << "]";
        cin >> arry[j];
    }

    return;
}
double addx()
{
    double sumx = 0;
    for (int i = 0; i < n; i++)
    {
        sumx = sumx + arrx[i];
    }
    return sumx;
}
double addy()
{
    double sumy = 0;
    for (int j = 0; j < n; j++)
    {
        sumy = sumy + arry[j];
    }
    return sumy;
}
double addxsquare()
{
    double sumxs = 0;
    for (int i = 0; i < n; i++)
    {
        sumxs = sumxs + pow(arrx[i], 2);
    }
    return sumxs;
}
double addxy()
{
    double sumxy = 0;
    for (int j = 0; j < n; j++)
    {
        sumxy = sumxy + (arrx[j] * arry[j]);
    }
    return sumxy;
}