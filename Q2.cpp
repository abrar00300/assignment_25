#include<iostream>
using namespace std;
class Time
{
private:
    int h,m,s;
public:
    void set(int H,int M,int S)
    {
        h=H;
        m=M;
        s=S;
    }
    void get()
    {
        cout<<h<<":"<<m<<":"<<s;
    }
};
int main()
{
    Time t;
    t.set(2,4,50);
    t.get();
    return 0;
}
