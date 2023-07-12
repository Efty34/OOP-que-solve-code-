#include <bits/stdc++.h>
using namespace std;

class con
{
    double a,b,c;
    char u;
    public:
    con(double x=0,double y=0,double z=0)
    {
        a=x;b=y,c=z;
    }
    con(char x=0,double y=0, double z=0)
    {
        u=x;
        a=y;
        b=z;
    }
    void showddd()
    {
        cout<<a<<" "<<b<<" "<<u<<endl;
    }
    void showcdd()
    {
        cout<<u<<" "<<a<<" "<<b<<endl;
    }
    
};

int main()
{
    con a('c',20,30);
    a.showcdd();
    con n('c',55);
    n.showcdd();
    con b('c');
    b.showcdd();
    
    return 0;
}
