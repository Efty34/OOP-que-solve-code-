#include <bits/stdc++.h>
using namespace std;

class person
{
    string name;
    public:
    person(string n)
    {
        name=n;
    }
    virtual void info()
    {
        cout<<"Name is="<<name<<endl;
    }

};
class Student:public person
{
    int matric_number;
    public:
    Student(string s,int mn):person(s)
    {
        matric_number=mn;
    }
    void info()
    {
       // person::info();
        cout<<"Matric number="<<matric_number<<endl;
    }
};
class MasterStudent:public person
{
    string add_sub;
    public:
    MasterStudent(string s,string lo):person(s)
    {
        add_sub=lo;
    }
    void info()
    {
        //person::info();
        cout<<"Additional sub="<<add_sub<<endl;
    }
};

int main()
{
    Student s("ddderf erf",90);
    s.info();
    MasterStudent a("ads ad","Ad ad");
    a.info();
    
    return 0;
}
