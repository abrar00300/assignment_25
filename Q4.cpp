#include<iostream>
using namespace std;
class LargestNumber
{
public :
    int largest(int a,int b,int c)
    {
        if(a>b)
        {
            if(a>c)
                return a;
            else
                return c;
        }
        else
        {
            if(b>c)
                    return b;
            else
                    return c;
        }
    }
};
int main()
{
    LargestNumber l;
    cout<<l.largest(3,7,2);
    return 0;
}
