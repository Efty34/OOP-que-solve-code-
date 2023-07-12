#include <bits/stdc++.h>
#include <math.h>
using namespace std;

class rec
{
    float x, y;

public:
    void set_xy()
    {
        cout << "Enter X & Y: ";
        cin >> x >> y;
    }
    float get_x()
    {
        return x;
    }
    float get_y()
    {
        return y;
    }
    void show_xy()
    {
        cout << "X & Y :" << x << "," << y << endl;
    }
};

class polar
{
    float r, theta;

public:
    void set_rtheta()
    {
        cout << "Enter r & theta: ";
        cin >> r >> theta;
    }
    float get_r()
    {
        return r;
    }
    float get_theta()
    {
        return theta;
    }
};

class polar_to_rec : public polar
{
    float x,y;

public:
    void polartorec()
    {
        x = get_r() * cos(get_theta());
        y = get_r() * sin(get_theta());

    }
    void convertform1()
    {
        cout<<"Polar to Rec X & Y= "<<x<<","<<y<<endl;
    }
};

class rec_to_pol:public rec
{
    float a,b,c,d;
    public:
    void rectopol()
    {
        a=get_x();
        b=get_y();
        c=sqrt((a*a)+(b*b));
        d=atan(b/a);
    }
    void convertform2()
    {
        cout<<"Rec to Polar r & theta= "<<c<<"<"<<d<<endl;
    }
};

int main()
{
    polar_to_rec d;
    d.set_rtheta();
    d.polartorec();
    d.convertform1();

    rec_to_pol a;
    a.set_xy();
    a.rectopol();
    a.convertform2();

    return 0;
}
