#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

enum numberType{
    WEIRD = 1,
    NOTWEIRD = 2,
    ERROR = 3,
};

numberType checkNumber(int n)
{
    if ((1 > n) || (100 < n))
        return ERROR;
    if (n % 2 == 0)
    {
        if ((2 < n) && (5 > n))
            return NOTWEIRD;
        else if ((6 < n) && (20 > n))
            return WEIRD;
        else if (20 < n)
            return NOTWEIRD;
    }        
        return WEIRD;
}

int main(){
    int N;
    cin >> N;
    if (checkNumber(N) == WEIRD)
    {
        cout << "Weird" << endl;
    }
    else if (checkNumber(N) == NOTWEIRD)
    {
        cout << "Not Weird" << endl;
    }
    else
        cout << "Invalid number!";
    return 0;
}

