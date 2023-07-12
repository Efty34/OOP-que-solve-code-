#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream input("input.txt");
    ofstream output("output.txt");

    if (!input)
    {
        cout << "Opening file problem" << endl;
        return 1;
    }
    if (!output)
    {
        cout << "Writting in file problem" << endl;
        return 1;
    }

    int sum = 0;
    string c;
    int n;

    while (input >> c >> n)
    {
        sum += n;
    }

    output <<"Total cost="<< sum << endl;
    // while(input.eof()==0)
    // {
    //     string s;
    //     getline(input,s);
    //     cout<<s<<endl;
    // }

    input.close();
    output.close();

    return 0;
}