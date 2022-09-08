// Question 38
// Devise a detailed computer solution to accept pairs of data points (x, y) as input and calculate the equation of the line. Your output should be of the form  , that is the line of best fit where a and b are constants. The values for a and b can be obtained using the following relations:

//  a=(∑_(i=1)^n▒〖y_i-b∑_(i=1)^n▒x_i 〗)/n
//  b=(∑_(i=1)^n▒〖x_i y_i-(∑_(i=1)^n▒〖x_i ∑_(i=1)^n▒y_i 〗)/n〗)/((∑_(i=1)^n▒〖x_i^2-(∑_(i=1)^n▒x_i )^2 〗)/n)

// where
//  sum of the product x1y1 + x2y2 +…+ xnyn
//  sum of x-values=x1 + x2 + … xn
//  sum of y-values = y1 + y2 + … + yn
//  sum of squares of x-values = x12 + x22 + … +xn2

// Dennis_Simplifies Solution
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x, y, a, b, sumX = 0, sumY = 0, sumXY = 0, sumXsqrd = 0;
    int numOfPairs;

    for (int i = 1; i <= numOfPairs; i++)
    {
        cout << "Enter the x data pairs: ";
        cin >> x;
        cout << "Enter the y data point: ";
        cin >> y;
        sumX += x;
        sumY += y;
        sumXY += x * y;
        sumXsqrd += pow(x, 2);
    }
    b = (sumXY - (sumX * sumY) / numOfPairs) / (sumXsqrd - pow(sumX, 2)) / numOfPairs;
    a = (sumY - (b * sumX)) / numOfPairs;
    cout << "y = " << a << "x + " << b;
    return 0;
}

// My Solution
// #include <iostream>
// #include <cmath>
// using namespace std;

// void getinput();
// double addx();
// double addy();
// double addxsquare();
// double addxy();
// double arrx[100], arry[100];
// int n;

// int main()
// {
//     int a, b, y;
//     getinput();

//     b = (addxy() - ((addx() * addy()) / n)) / ((addxsquare() - pow(addx(), 2)) / n);
//     a = (addy() - b * addx()) / n;
//     cout << "y = " << a << "x +" << b << endl;
//     return 0;
// }

// void getinput()
// {
//     cout << "Enter the total number of numbers " << endl;
//     cin >> n;
//     cout << "Enter your x values " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << "[" << i << "]";
//         cin >> arrx[i];
//     }
//     cout << "Enter your y values " << endl;
//     for (int j = 0; j < n; j++)
//     {
//         cout << "[" << j << "]";
//         cin >> arry[j];
//     }

//     return;
// }
// double addx()
// {
//     double sumx = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sumx = sumx + arrx[i];
//     }
//     return sumx;
// }
// double addy()
// {
//     double sumy = 0;
//     for (int j = 0; j < n; j++)
//     {
//         sumy = sumy + arry[j];
//     }
//     return sumy;
// }
// double addxsquare()
// {
//     double sumxs = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sumxs = sumxs + pow(arrx[i], 2);
//     }
//     return sumxs;
// }
// double addxy()
// {
//     double sumxy = 0;
//     for (int j = 0; j < n; j++)
//     {
//         sumxy = sumxy + (arrx[j] * arry[j]);
//     }
//     return sumxy;
// }