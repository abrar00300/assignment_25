#include<iostream>
using namespace std;
class Rectangle
{
public:
    float area(int b,int h)
    {
        return 0.5*b*h;
    }
};
int main()
{
    Rectangle r;
    cout<<r.area(3,2);
    return 0;
}
