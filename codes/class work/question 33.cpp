// Question 33
// Talk and Talk More (TTM) mobile phone service provider requires a program to compute the cost of national and international calls. National calls are of two types namely same network and other network. The cost of the calls is determined as follows:
// (i)	Any call started between 7am and 7pm, Monday through Friday, is charged as follows:
// -	1200 and 2400 cedis per minute for same and other network respectively
// -	8,200 cedis for international calls.
// (ii)	Any call started before 7am or after 7pm, Monday through Friday, is charged as follows:
// -	800 and 1400 cedis per minute for same and other network respectively
// -	5,200 cedis for international calls.
// (iii)	Any call started on Saturday or Sunday is free, 600 and 4000 cedis respectively for same network, different network and international calls.

// The days of the week are coded 1 through 7 for Monday through Sunday respectively. Also the same network, different network and international calls have codes 1, 2 and 3 respectively.

// You are required to write a computer solution that will accept as input the code for the day and the code for the type of the call, which is the same network, other network or international. In addition, your computer solution should accept for each call the length of the call in minutes and the time a call started. The time will be inputted in 24-hour notation so that time 1.48 is input as 1348.

#include <iostream>
using namespace std;
int main()
{
    int day, call_type, call_length, time;
    cout << "Enter the day (1-7): ";
    cin >> day;
    cout << "Enter the type of the call (1-3): ";
    cin >> call_type;
    cout << "Enter the length of the call in minutes: ";
    cin >> call_length;
    cout << "Enter the time the call started (24-hour notation): ";
    cin >> time;
    if (day == 1 || day == 2 || day == 3 || day == 4 || day == 5)
    {
        if (time >= 7 && time <= 19)
        {
            if (call_type == 1)
            {
                cout << "The cost of the call is " << 1200 * call_length << " cedis." << endl;
            }
            else if (call_type == 2)
            {
                cout << "The cost of the call is " << 2400 * call_length << " cedis." << endl;
            }
            else
            {
                cout << "The cost of the call is " << 8200 * call_length << " cedis." << endl;
            }
        }
        else
        {
            if (call_type == 1)
            {
                cout << "The cost of the call is " << 800 * call_length << " cedis." << endl;
            }
            else if (call_type == 2)
            {
                cout << "The cost of the call is " << 1400 * call_length << " cedis." << endl;
            }
            else
            {
                cout << "The cost of the call is " << 5200 * call_length << " cedis." << endl;
            }
        }
    }
    else
    {
        if (call_type == 1)
        {
            cout << "The cost of the call is " << 600 * call_length << " cedis." << endl;
        }
        else if (call_type == 2)
        {
            cout << "The cost of the call is " << 4000 * call_length << " cedis." << endl;
        }
        else
        {
            cout << "The cost of the call is " << call_length * 4000 << " cedis." << endl;
        }
    }
    return 0;
}