#include<iostream>
using namespace std;
class Reverse
{
public:
    int rev(int n)
    {
        int r=0;
        while(n)
        {
            int d=n%10;
            r=r*10+d;
            n=n/10;
        }
        return r;
    }
};
int main()
{
    Reverse r;
    cout<<r.rev(342);
    return 0;
}
