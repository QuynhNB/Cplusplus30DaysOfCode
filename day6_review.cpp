#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    string str;
    cin >> n;
    if ((n < 1) || (n > 10))
    {
        cout << n << endl;
        return -1;
    }
    for (int j = 0; j < n; j++)
    {
        cin >> str;

        for (int i = 0; i < str.length(); i++)
        {
            if (i % 2 == 0)
                cout << str[i];
        }
        cout << " ";
        for (int i = 0; i < str.length(); i++)
        {
            if (i % 2 != 0)
                cout << str[i];
        }
        cout << endl;
    }
    return 0;
}

