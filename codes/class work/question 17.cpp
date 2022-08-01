// Question 17
// Pay As You Study University of Ghana charges 1000 cedis for each semester hour of credit, 500000 cedis for regular room (R) and 1000000 cedis for an air-conditioned room (A) and 500000  cedis for use of academic facilities. All students pay 200000 for matriculation and graduating students pay 300000 cedis for degree certificate. Devise a computer solution that computes fees that must be paid by each student. A warning message should be displayed if a student is taking more than 21 credit hours and less than 15 credit hours per semester. The input per student should be students' id number (4 digits), room type (A or R), credit hours and graduating status (Y or N).
#include <iostream>
using namespace std;
int main()
{
    int id, credit, fees;
    char room, status;
    cout << "Enter student id: ";
    cin >> id;
    cout << "Enter room type (A or R): ";
    cin >> room;
    cout << "Enter credit hours: ";
    cin >> credit;
    cout << "Enter graduating status (Y or N): ";
    cin >> status;
    if (credit > 21)
    {
        cout << "Warning: Student is taking more than 21 credit hours." << endl;
    }
    else if (credit < 15)
    {
        cout << "Warning: Student is taking less than 15 credit hours per semester." << endl;
    }
    if (room == 'A')
    {
        fees = 1000000 + 500000 * credit;
    }
    else
    {
        fees = 500000 + 500000 * credit;
    }
    if (status == 'Y')
    {
        fees += 300000;
    }
    else
    {
        fees += 200000;
    }
    cout << "Fees: " << fees << endl;
    return 0;
}