//question 3
// C++ solution that can be used to find the position of the last occurrence of a given number from a  given set of input. 
// You may 'dry run' your solution with the following test data.
// 	0 2 4 2 5 6 8 2 6 3 4 5 6 3 2 2 7 8 9 1 2 2 1
// Let 2 be the number that we want to find the position of its last occurrence (this should be 22)
#include <iostream>
using namespace std;
int main (){
    int n, x, i, j;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int a[n];
    cout << "Enter the elements of the array: ";
    for (i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << "Enter the value of x: ";
    cin >> x;
    for (i = 0; i < n; i++){
        if (a[i] == x){
            j = i;
        }
    }
    cout << "The position of the last occurrence of x is " << j << endl;
    return 0;
}