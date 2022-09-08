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
    int day = 1, numOfDays, firstDay;

    cout << "Enter the number of days in the month: ";
    cin >> numOfDays;

    cout << "Enter the First Day of the Month: \n";

    cout << "1 = Monday \n 2 = Tuesday \n 3 = Wednesday \n 4 = Thursday \n 5 = Friday \n 6 = Saturday \n 7 = Sunday \n";
    cout << "\n What number? ";
    cin >> firstDay;

    cout << endl;
    cout << "\n MON\tTUES\tWED\tTHUR\tFRI\tSAT\tSUN \n";

    for (int i = 2; i <= firstDay; i++)
    {
        cout << "\t";
    }
    for (int j = firstDay; j <= 7; j++)
    {
        cout << " " << day++ << "\t";
    }
    cout << endl;

    for (int k = 1; k <= 5; k++)
    {
        for (int r = 1; r <= 7; r++)
        {
            if (day <= numOfDays)
                cout << " " << day++ << "\t";
        }
        cout << endl;
    }
    return 0;
}