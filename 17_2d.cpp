#include <bits/stdc++.h>
using namespace std;

class test
{
    static int x;
    public:
    static int y;
    void func(int x)
    {
        cout<<"value of Test :: x="<<test::x<<endl;
        cout<<"Valus of x="<<x<<endl;
    }
};
int test::x=-1;
int test::y=2;


int main()
{
    test a;
    int x=3;
    a.func(x);
    cout<<"test::y="<<test::y<<endl;
    
    return 0;
}
