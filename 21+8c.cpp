#include <bits/stdc++.h>
using namespace std;
int f(int x)throw(int)
{
    if(x==1)
        throw 1;
    else
        throw 0;
}
int main()
{
    try
    {
        f(1);
    }
    catch(int)
    {
        cout<<"paici"<<endl;
    }
    
    return 0;
}
