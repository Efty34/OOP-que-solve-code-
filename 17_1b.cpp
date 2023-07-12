#include <bits/stdc++.h>
using namespace std;

class student
{
    string name;
    int roll;
    int s1,s2,s3;
    public:
    student(){}
    student(string s,int a,int b,int c,int d)
    {
        name=s;
        roll=1;s1=b;s2=c;s3=d;
    }
    student(student &a)
    {
        name=a.name;
        roll=a.roll;
        s1=a.s1;
        s2=a.s2;
        s3=a.s3;   
    }
    void show()
    
    {
        cout<<name<<endl;
        cout<<roll<<endl;
        cout<<s1<<endl;
        cout<<s2<<endl;
        cout<<s3<<endl;

    }

};

int main()
{
    student a("abul kamal",10,90,98,99);
    a.show();
    student b=a;
    b.show();
    
    return 0;
}
