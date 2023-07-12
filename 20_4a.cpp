#include <bits/stdc++.h>
using namespace std;

class A
{
    public:
    int a;
    void get_a()
    {
        cout<<a<<endl;
    }
};

class B:virtual public A
{
    public:
    int b;
    void get_b()
    {
        cout<<b<<endl;
    }
};
class D:virtual public A
{
    public:
    int d;
    void get_d()
    {
        cout<<d<<endl;
    }
};
class E:virtual public A
{
    public:
    int e;
    void get_e()
    {
        cout<<e<<endl;
    }
};
class F:virtual public A
{
    public:
    int f;
    void get_f()
    {
        cout<<f<<endl;
    }
};
class C:virtual public A
{
    public:
    int c;
    void get_c()
    {
        cout<<c<<endl;
    }
};
class G:public D,virtual public E
{
    public:
    int g;
    void get_g()
    {
        cout<<g<<endl;
    }
};
class H:public F,virtual public E
{
    public:
    int h;
    void get_h()
    {
        cout<<h<<endl;
    }
};
class I:public B,public G,public H,public C
{
    public:
    int i;
    void get_i()
    {
        cout<<i<<endl;
    }
};

int main()
{
    I cc;
    cc.a=6;
    cc.get_a();
    cc.e=9;
    cc.get_e();

    
    return 0;
}
