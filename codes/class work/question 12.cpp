// Question 12
// Brofoyedur is a small town in the Central Region of Ghana. It has been estimated that the population of this town is about 2000 people and that the population is increasing at a rate of 15% every six months. You are required to write a computer solution to determine the number of years that it would take for the population size to exceed two million for the village to become a city.
#include <iostream>
using namespace std;
int main()
{
    double years, population = 2000, months = 0;
    while (population <= 2000000)
    {
        population += (population * 0.15);
        months += 6;
    }
    years = months / 12;
    cout << "It will take " << years << " years for the population to exceed 2 million." << endl;
    return 0;
}