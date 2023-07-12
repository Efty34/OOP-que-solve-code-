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
class C:virtual public A
{
    public:
    int c;
    void get_c()
    {
        cout<<c<<endl;
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
class E:virtual public B
{
    public:
    int e;
    void get_e()
    {
        cout<<e<<endl;
    }
};
class F:virtual public B,virtual public C
{
    public:
    int f;
    void get_f()
    {
        cout<<f<<endl;
    }
};
class G:virtual public C,public D
{
    public:
    int g;
    void get_g()
    {
        cout<<g<<endl;
    }
};
class H:virtual public F,public E
{
    public:
    int h;
    void get_h()
    {
        cout<<h<<endl;
    }
};
class I:virtual public F,public G
{
    public:
    int i;
    void get_i()
    {
        cout<<i<<endl;
    }
};
class J:virtual public H,public I
{
    public:
    int j;
    void get_j()
    {
        cout<<j<<endl;
    }
};

int main()
{
    J x;
    x.a=9;
    x.get_a();
    I y;
    y.c=0;  //can access c with y after using virtual,but before virtual ambuguity will rise
    y.get_c();

    
    return 0;
}
