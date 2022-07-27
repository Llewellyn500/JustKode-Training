// Question 16:
// Assume you are the captain of JB and SONS Airline Ltd (JBSL) and you are approaching Britain, a country that still measures distances in miles, yards and feet. Your range finder unfortunately can read only distances in feet to the nearest whole number. Fortunately enough, your plane has a small personal computer on which the C++ compiler has been installed. It has become very necessary for you to write a simple computer solution that will later be coded in C++ language to convert a number of distances in feet to miles, yards and feet. You should accept as input a distance in feet and display the equivalent in miles, yards and feet. If a term is zero, it should not be printed.

// For example
// 5287 should be displayed as 1 mile 2 yards 1 foot
// 5279 should be displayed as 1759 yards 2 feet

// Note:  1 mile = 1760 yards and 3 feet = 1 yard.

#include <iostream>
using namespace std;
int main()
{
    double feet, miles, yards;
    int distance;
    cout << "Enter distance (in feet): ";
    cin >> distance;

    miles = distance / 5280;
    yards = (distance % 5280) / 3;
    feet = (distance % 5280) % 3;

    if (miles > 0)
    {
        cout << miles;
        if (miles == 1)
        {
            cout << " mile ";
        }
        else
        {
            cout << " miles ";
        }
    }
    if (yards > 0)
    {
        cout << yards;
        if (yards == 1)
        {
            cout << " yard ";
        }
        else
        {
            cout << " yards ";
        }
    }
    if (feet > 0)
    {
        cout << feet;
        if (feet == 1)
        {
            cout << " foot ";
        }
        else
        {
            cout << " feet ";
        }
    }

    return 0;
}
