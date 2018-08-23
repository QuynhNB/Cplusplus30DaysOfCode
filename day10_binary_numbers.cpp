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
#include <unordered_map>


using namespace std;

int DecimalToBinary(int n)
{
    int remainder;
    int binary;
    int i = 0, count = 0, temp = 0;
    while (n > 0)
    {
        remainder = n % 2;
        n = n / 2;
        if (remainder == 1)
        {
           count++;
           if (count >= temp)
               temp = count;
        }
        else
        {
           count = 0;
        } 
    }
    return temp;
}

int main(){
    int n;

    cin >> n;

    cout << DecimalToBinary(n) << endl;

    return 0;
}

