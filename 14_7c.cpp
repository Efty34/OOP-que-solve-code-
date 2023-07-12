#include <bits/stdc++.h>
using namespace std;
class animal
{
    public:
    virtual void treat()=0;
};
class cat:public animal
{
    public:
    void treat()
    {
        cout<<"cat"<<endl;
    }
};
class dog:public animal
{
    public:
    void treat()
    {
        cout<<"dog"<<endl;
    }
    void bark()
    {
        cout<<"woof"<<endl;
    }
};
void treatanimal(animal *p)
{
    dog d;
    p=&d;
    cout<<"type of animal pointer"<<endl;
    cout<<typeid(*p).name()<<endl;
    if(dog *d=dynamic_cast<dog*>(p))
    {
        p->treat();
        d->bark();
    }
}
int main()
{
    animal *p;
    dog d;
    p=&d;
    treatanimal(p);
    
    return 0;
}
