#include<iostream>
using namespace std;
class Factorial
{
public:
    int fact(int n)
    {
        int i,f=1;
        for(i=n;i>0;i--)
        {
            f=f*i;
        }
        return f;
    }
};
int main()
{
    Factorial f;
    cout<<f.fact(3);
}
