#include<iostream>
using namespace std;
class Complex
{
private:
        int real,imag;
public:
    void set(int r,int i)
    {
        real=r;
        imag=i;
    }
    void get()
    {
        cout<<real<<" + "<<imag;
    }
};
int main()
{
    Complex obj;
    obj.set(2,3);
    obj.get();
    return 0;
}

