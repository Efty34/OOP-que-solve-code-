#include <bits/stdc++.h>
using namespace std;
class demo
{
    int a;
    public:
    demo()
    {
        cout<<"Default cons"<<endl;
    }
    demo(int x=0):a(0){cout<<"Daf argument"<<a;}
};
int main()
{
    
    demo d(10);

    
    return 0;
}
