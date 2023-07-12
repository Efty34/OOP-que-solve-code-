/////////////   2017_2(a)    //////////////////
#include <bits/stdc++.h>
using namespace std;
class String
{
    string a;
    public:
    String(){}
    String(string x)
    {
        a=x;
    }
    String operator+(String r)
    {
        String temp;
        temp.a=a+r.a;
        return temp;
    }
    void showw()
    {
        cout<<"String is="<<a<<endl;
    }
    void operator==(String temp)
    {
        if(a==temp.a)
        {
            cout<<"Equal"<<endl;
        }
        else
            cout<<"Not Equal"<<endl;
    }
};
int main()
{
    String a1("mkemd endi"),a2("ndjwi wjdi"),a3;
    a3=a1+a2;
    a1.showw();
    a2.showw();
    a3.showw();
    a1==a3;

    
    return 0;
}
