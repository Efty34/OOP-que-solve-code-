#include <bits/stdc++.h>
using namespace std;
class base
{
public:
    virtual void f()
    {
        cout << "base f" << endl;
    }
};
class d1 : public base
{
    void f()
    {
        cout << "d1 f" << endl;
    }
};
class d2 : public d1
{
    void f()
    {
        cout<<"d2 f"<<endl;
    }
};
class d3 : public d2
{
    // void f()
    // {
    //     cout<<"d3 f"<<endl;
    // }
};
class d4 : public d3
{
    // void f()
    // {
    //     cout<<"d4 f"<<endl;
    // }
};
int main()
{
    d4 d;
    base &p = d;
    p.f(); // calls the most derived class function, which is in this case "d

    return 0;
}
