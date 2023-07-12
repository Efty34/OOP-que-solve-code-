#include <bits/stdc++.h>
using namespace std;
class b1
{
public:
    void display()
    {
        cout << "B1" << endl;
    }
};
class b2 : b1
{
public:
    void display()
    {
        cout << "B2" << endl;
    }
};
class derived : public b2
{
public:
    void display()
    {
        cout << "Derived" << endl;
    }
};
int main()
{
    derived d;
    d.display();
    //d.b2::display();

    return 0;
}
