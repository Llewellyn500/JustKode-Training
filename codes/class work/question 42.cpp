// Question 42
// A young boy was sent by his mother to get some eggs from a nearby supermarket for his birthday party. On his way home, he was knocked down by a motorist and had all the eggs broken. The boy was unhurt and the motorist agreed to pay for the eggs. The boy could not remember the exact number of eggs, only that when he took them out in pairs there was one left; similarly there was one left when he took them out threes, fours, fives, or sixes at a time. When he took them out in sevens at a time they came out even, that is there was nothing left. You are required to
// write a computer solution to determine the smallest number of eggs the boy could have had and the total cost if the boy claims that he paid 4 pesewas per egg.

#include <iostream>
using namespace std;
int main()
{
    double cost;
    int numOfEggs, i = 0;
    do
    {
        i++;
        numOfEggs = 60 * i + 1;
    } while (numOfEggs % 7 != 0);

    cost = numOfEggs * 0.04;

    cout << "The smallest number of eggs: " << numOfEggs << endl;
    cout << "The Total cost: Ghc " << cost << endl;

    return 0;
}