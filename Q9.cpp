#include<iostream>
using namespace std;
class Circle
{
public:
    float area(int r)
    {
        return 3.14*r*r;
    }
};
int main()
{
    Circle r;
    cout<<r.area(2);
    return 0;
}

