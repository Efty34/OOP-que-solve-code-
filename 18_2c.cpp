#include <bits/stdc++.h>
using namespace std;
class DoubleArray
{
    float avg;
    double arr[10];

public:
    DoubleArray() {}
    DoubleArray(DoubleArray &a)
    {
        for (int i = 0; i < 10; i++)
        {
            arr[i] = a.arr[i];
        }
        avg = a.avg;
    }
    void store()
    {
        int sum = 0;
        for (int i = 0; i < 10; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        avg = sum / 10;
    }
    void display()
    {
        cout << avg << endl;
    }
};
int main()
{
    DoubleArray d;
    d.store();
    d.display();
    DoubleArray c = d;
    c.display();
}