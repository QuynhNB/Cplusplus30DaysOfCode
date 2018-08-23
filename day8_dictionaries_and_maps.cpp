#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    string name;
    long number;
    cin >> n;
    cin.ignore();
    map <string, long> phonebook;
    for (int i = 0; i < n; i++)
    {
        cin >> name;
        cin >> number;
        phonebook[name] = number;
    }
    
    while(cin >> name)
    {
        if (phonebook.find(name) != phonebook.end())
        {
            cout << name << "=" << phonebook.find(name)->second << endl;
        }
        else
        {
            cout << "Not found" << endl;
        }
    }
    return 0;
}

