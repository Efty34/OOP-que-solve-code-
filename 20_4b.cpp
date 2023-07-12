#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d[] = {10, 340, 200, 0, 50, 60};
    float sum = 0;
    for (int i = 0; i <= 6; i++)
    {
        // try
        // {
        //     if (d[i] != 0)
        //     {
        //         sum += 1/d[i];
        //     }
        //     else
        //         throw -1;
        // }
        // catch (int x)
        // {
        //     cout << x << endl;
        // }
        try
        {
            if (d[i] == 0)
                throw 0 ;
             sum += 1 / d[i];
        }
        catch (int x)
        {
            cout << "Exception caught" << endl;
        }
    }
    cout << sum;

    return 0;
}
