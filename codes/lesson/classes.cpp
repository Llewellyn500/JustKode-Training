#include <iostream>
#include <string>
using namespace std;
class Car {
    public:
    string brandname;
    string model;
    int speed;

};

int main()
{
    Car rolls_royce;
    rolls_royce.brandname = "Rolls Royce";
    rolls_royce.model = "Ghost";
    rolls_royce.speed = 9999999;

    cout << rolls_royce.brandname;
    return 0;
}