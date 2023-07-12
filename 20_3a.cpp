////////////////   2020_3(a)   ///////////////
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
    friend complexx operator+(complexx, complexx);
    friend complexx operator++(complexx, int);
};
complexx operator+(complexx a, complexx b)
{
    complexx t;
    t.real = a.real + b.real;
    t.img = a.img + b.img;
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
int main()
{
    complexx c1(2,3),c2(4,5),c3,c4;
    c3=c1+c2;
    c4=c3++;
    c1.displaycomplexx();
    c2.displaycomplexx();
    c3.displaycomplexx();
    c4.displaycomplexx();

    
    return 0;
}
