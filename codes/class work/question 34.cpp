// Question 34
// Assume that there is a function called tab which is used with an output statement such as the print to specify the number of print positions to be left blank from the current cursor position. Let the syntax of tab be tab(x) where x is the number of spaces required. You are required to write a detailed computer solution for printing the calendar of a given input data. The input should be the number of days in the month and the day (Monday, Tuesday, etc) on which the first of the month falls. For example, if the number of days is 31 and the first of the month falls on a Wednesday then your output should be as follows:


// MON	TUE	WED	THU	FRI	SAT	SUN
// 		    1	2	3	4	5
// 6	7	8	9	10	11	12
// 13	14	15	16	17	18	19
// 20	21	22	23	24	25	26
// 27	28	29	30	31

#include <iostream>
using namespace std;
int main()
{
    int days, day, i, j, k;
    cout << "Enter the number of days in the month: ";
    cin >> days;
    cout << "Enter the day (Monday, Tuesday, etc) on which the first of the month falls: ";
    cin >> day;
    for (i = 1; i <= 7; i++)
    {
        if (i == day)
        {
            for (j = 1; j <= days; j++)
            {
                cout << j << " ";
            }
        }
        else
        {
            for (k = 1; k <= days; k++)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}