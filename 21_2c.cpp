#include <bits/stdc++.h>
using namespace std;

class Test
{
    public:
    Test()
    {
        cout<<"c"<<endl;
    }
    ~Test()
    {
        cout<<"o"<<endl;
    }
};

int main()
{
    Test t=Test();
    Test();
    t.~Test();
    
    return 0;
}
