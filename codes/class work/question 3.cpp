// question 3
//  C++ solution that can be used to find the position of the last occurrence of a given number from a  given set of input.
//  You may 'dry run' your solution with the following test data.
//  	0 2 4 2 5 6 8 2 6 3 4 5 6 3 2 2 7 8 9 1 2 2 1
//  Let 2 be the number that we want to find the position of its last occurrence (this should be 22)

#include <iostream>
using namespace std;
int main()
{
    int setLength, number, lastOccurrence = 0, set;

    cout << "Enter the length of the set: ";
    cin >> setLength;
    cout << "Enter the number: ";
    cin >> number;
    cout << endl;

    for (int i = 0; i < setLength; i++)
    {
        cout << "Enter the set of numbers: ";
        cin >> set;
        if (number == set)
        {
            lastOccurrence = i + 1;
        }
    }
    cout << endl;
    cout << "Position of Last Occurrence: " << lastOccurrence;
    return 0;
}

// this procedure is not reliable if the data is like 100, so i deviced another way using arrays where if you make a mistake at any point you can just go back to that slot and change the value.
// #include <iostream>
// using namespace std;
// int main (){
//     int n, x, i, j;
//     cout << "Enter the number of elements in the array: ";
//     cin >> n;
//     int a[n];
//     cout << "Enter the elements of the array: ";
//     for (i = 0; i < n; i++){
//         cin >> a[i];
//     }
//     cout << "Enter the value of x: ";
//     cin >> x;
//     for (i = 0; i < n; i++){
//         if (a[i] == x){
//             j = i;
//         }
//     }
//     cout << "The position of the last occurrence of x is " << j+1 << endl;
//     return 0;
// }