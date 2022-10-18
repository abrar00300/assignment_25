#include<iostream>
using namespace std;
int cnt;
class Square
{
public:
    int sqr(int n)
    {
        cnt++;
        return n*n;
    }
};
int main()
{
    Square s;
    s.sqr(4);
    s.sqr(5);
    cout<<cnt;
    return 0;
}
