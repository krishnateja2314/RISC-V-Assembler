#include "../include/utilis.h"
using namespace std;
#include <iostream>

int main()
{

    string s = "li x4,10(x5)";
    vector<string> v;
    v = tokenize(s);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}