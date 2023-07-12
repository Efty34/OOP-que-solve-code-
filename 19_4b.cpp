#include <bits/stdc++.h>
#include<fstream>
using namespace std;

int main()
{
    ifstream infile("input.txt");
    ofstream outfile("output.txt");

    if(!infile)
    {
        cout<<"Reading in file is problem"<<endl;
        return 1;
    }
    if(!outfile)
    {
        cout<<"Writting in file is problem"<<endl;
        return 1;
    }
    int n1,n2;
    int sum;
    while(infile>>n1>>n2)
    {
        sum=n1+n2;
        outfile<<"Sum="<<sum<<endl;
    }
    cout<<"Operation Done"<<endl;

    infile.close();
    outfile.close();
    
    return 0;
}
