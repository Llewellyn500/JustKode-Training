#include <iostream>
using namespace std;

class Human
{
public:
    string name;
    int age;
    int height;
    int weight;

    Human(int ageParameter){
        age=ageParameter;
    }
};

int main()
{

Human jeff(12);
Human jeff2(15);
Human jeff4(20);

cout<<jeff.age;
    return 0;
}