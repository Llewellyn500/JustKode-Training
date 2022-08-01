//Question 18
// The transportation fare along a certain road in Ghana is calculated using the following sliding scale:
// •	A fixed amount of ¢2000.00 is paid by all passengers
// •	       The first 10 kilometers is free
// 	The next 30 kilometers attract ¢100.00 each
// 	The next 110 kilometers attract ¢175.00 each
// 	Any excess kilometer over 150 kilometers attract ¢50.00.
// Your problem is to write a computer solution that would allow a distance to be entered, compute the required fare and then return as output the expected fare and the distance traveled.
#include <iostream>
using namespace std;
int main(){
    int distance;
    cout << "Enter distance: ";
    cin >> distance;
    int fare = 2000;
    if (distance <= 10)
    {
        cout << "Fare: " << fare << endl;
    }
    else if (distance <= 30)
    {
        fare += 100 * (distance - 10);
        cout << "Fare: " << fare << endl;
    }
    else if (distance <= 110)
    {
        fare += 175 * (distance - 30);
        cout << "Fare: " << fare << endl;
    }
    else if (distance >= 150)
    {
        fare += 50 * (distance - 110);
        cout << "Fare: " << fare << endl;
    }
    else
    {
        cout << "Fare: " << fare << endl;
    }
    return 0;
}