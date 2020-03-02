#include <iostream>

using namespace std;

class Circle
{
public:
    float radius_;
    Circle(float);
};

Circle::Circle(float a)
{
    radius_=a;
}

int main()
{
    Circle r;

    return 0;
}

