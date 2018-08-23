#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int isPrime(int n)
{
    if(n < 2)
        return 0;
    for (int i = 2; i*i <= n; i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T, n;
    cin >> T;
    
    for(int j = 0; j < T; j++)
    {
        cin >> n;
        if(isPrime(n))
            cout << "Prime" << endl;
        else
            cout << "Not prime" << endl;
    }
    return 0;
}

