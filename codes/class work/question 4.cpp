// Question 4
// Device a computer solution that can be used to compute the median and the mean of a set of numbers given that the numbers have already been arranged in decreasing order of magnitude.
#include <iostream>
using namespace std;
int main (){
    int n, i;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int a[n];
    cout << "Enter the elements of the array: ";
    for (i = 0; i < n; i++){
        cin >> a[i];
    }
    int sum = 0;
    for (i = 0; i < n; i++){
        sum = sum + a[i];
    }
    float mean = sum / n;
    cout << "The mean of the array is " << mean << endl;
    int median = 0;
    if (n % 2 == 0){
        median = (a[n / 2] + a[n / 2 - 1]) / 2;
    }
    else{
        median = a[n / 2];
    }
    cout << "The median of the array is " << median << endl;
    return 0;
}