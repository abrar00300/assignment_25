#include<iostream>
using namespace std;
class Area
{
public:
    float circle(int r)
    {
        return 3.14*r*r;
    }
    float rectangle(int b,int h)
    {
        return 0.5*b*h;
    }
    int square(int l)
    {
        return l*l;
    }
};
