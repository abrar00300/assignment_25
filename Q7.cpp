#include<iostream>
using namespace std;
class Greatest
{
public:
   int greatest(int a,int b,int c)
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
    Greatest l;
    cout<<l.greatest(3,7,2);
    return 0;
}
