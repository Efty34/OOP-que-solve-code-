#include <bits/stdc++.h>
using namespace std;

class test
{
    //int a,b;
    public:
    // test(int x,int y)
    // {
    //     a=x;b=y;
    //     cout<<"Cons Called"<<endl;
    // }
    test()
    {
        cout<<"Default Constructor called"<<endl;
    }
    ~test()
    {
        cout<<"Destructor Called"<<endl;
    }
};

int main()
{
    // test a(10,20);
    // test b=test(30,40);
    test a;
    test b=test();
    //a.~test();
    b.~test();
    
    return 0;
}
