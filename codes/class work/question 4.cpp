// Question 4
// Device a computer solution that can be used to compute the median and the mean of a set of numbers given that the numbers have already been arranged in decreasing order of magnitude.
#include <iostream>
using namespace std;
int main (){
    double mean, median, sum = 0;
    int size;
    cout << "Size of array: ";
    cin >> size;

    double* array = new double[size];
    for (int i = 1; i<= size; i++){
        cout << "array["<<i<<"]";
        cin>>array[i];
        sum+=array[i];
    }
    mean = sum/size;
    if (size % 2 == 0)
        median = (array[size / 2] + array[(size / 2) + 1]) / 2;
        else 
        median = array[(size + 1)/2];

        cout << endl;
        cout << "Mean is " << mean << " and the median is " << median << endl;

    return 0;
}