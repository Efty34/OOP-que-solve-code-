#include <bits/stdc++.h>
using namespace std;
class A1
{
public:
    A1() {}
    A1(int x)
    {
        cout << "Al" << endl;
    }
};
class A2 : virtual public A1
{
public:
    A2(int x) : A1(x)
    {
        cout << "A2" << endl;
    }
};
class A3 : virtual public A1
{
public:
    A3(int x) : A1(x)
    {
        cout << "A3" << endl;
    }
};
class A4 : public A2
{
public:
    A4(int x) : A2(x)
    {
        cout << "A4" << endl;
    }
};
class A5 : public A3
{
public:
    A5(int x) : A3(x)
    {
        cout << "A5" << endl;
    }
};
class A6 : public A4, public A5
{
public:
    A6(int x) : A4(x), A5(x)
    {
        cout << "A6" << endl;
    }
};
int main()
{
    A6 A61(30);
    return 0;
}