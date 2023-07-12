#include <iostream>

using namespace std;

class rectangle
{
protected:
    int length, width;

public:
    rectangle(int x, int y) : length(x), width(y) {}
    int get_len()
    {
        return length;
    }

    virtual void area()
    {
        cout << "Area of rectangle is=" << length * width << endl;
    }
};
class triangle : public rectangle
{
    int height;

public:
    triangle(int x, int y, int z) : rectangle(x, y), height(z) {}
    void area()
    {

        rectangle::area();
        cout << "Area of triangle is=" << 0.5 * height * get_len() << endl;
    }
};

int main()
{
    rectangle b(10, 20), *bptr;
    triangle d(10, 20, 30), *dptr;
    bptr = &d;
    bptr->area();

    return 0;
}
