#include <iostream>
using namespace std;
int main()
{
    int i;
    // taking input of an array from the user
    cout << "Enter the number of courses: ";
    cin >> i;
    int marks[i];

    for (int j = 0; j < i; j++)
    {
        cout << "Enter the marks of course " << j + 1 << ": ";
        cin >> marks[j];
    }

    // grading the array
    for (int j = 0; j < i; j++)
    {
        if (marks[j] >= 90)
        {
            cout << "Grade of course " << j + 1 << " is A" << endl;
        }
        else if (marks[j] >= 80)
        {
            cout << "Grade of course " << j + 1 << " is B" << endl;
        }
        else if (marks[j] >= 70)
        {
            cout << "Grade of course " << j + 1 << " is C" << endl;
        }
        else if (marks[j] >= 60)
        {
            cout << "Grade of course " << j + 1 << " is D" << endl;
        }
        else
        {
            cout << "Grade of course " << j + 1 << " is F" << endl;
        }
    }
    
    return 0;
}
