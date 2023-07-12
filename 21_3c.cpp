////////////   2021_3(c)  //////////////    
#include <bits/stdc++.h>
using namespace std;

class complexx
{
    int real;
    int img;

public:
    complexx() {}
    complexx(int x, int y)
    {
        real = x;
        img = y;
    }
    void displaycomplexx()
    {
        cout << real << "+" << img << "i" << endl;
    }
    friend complexx operator*(complexx, complexx);
    friend complexx operator++(complexx, int);
    friend complexx operator++(complexx);
};

complexx operator*(complexx a, complexx b)
{
    complexx t;
    t.real = a.real * b.real;
    t.img = a.img * b.img;
    return t;
}
complexx operator++(complexx d, int)//postfix
{
    complexx temp;
    temp.real = d.real;
    temp.img = d.img;
    d.real++;
    d.img++;
    return temp;
}
complexx operator++(complexx d)//prefix
{
    complexx temp;
    d.real++;
    d.img++;
    temp.real = d.real;
    temp.img = d.img;
    
    return temp;
}

int main()
{
    complexx c1(3,5),c2(4,6),c3,c4,c5;
    c3=c1*c2;
    c4=++c3;
    c5=c4++;
    c1.displaycomplexx();
    c2.displaycomplexx();
    c3.displaycomplexx();
    c4.displaycomplexx();
    c5.displaycomplexx();



    return 0;
}
