// Question 24
// Write down a computer solution for finding the standard deviation for a given set of X values. The standard deviation, σ is given by the following relation
//  \sigma={\sqrt {\frac {\sum(x_{i}-{\mu})^{2}}{N}}}
// where xi  is a data point and xbar is the mean of the xis
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of data points: ";
    cin >> n;
    int x[n];
    cout << "Enter the data points: ";
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += x[i];
    }
    int mean = sum / n;
    int sum_diff = 0;
    for (int i = 0; i < n; i++)
    {
        sum_diff += (x[i] - mean) * (x[i] - mean);
    }
    int std_dev = sqrt(sum_diff / n);
    cout << "The standard deviation is " << std_dev << endl;
    return 0;
}
