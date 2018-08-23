#include <bits/stdc++.h>

using namespace std;

int factorial(int n) {
    // Complete this function
    int a;
    if (n > 1)
    {
        a = n * factorial(n - 1);
    }
    else
        a = 1;
    return a;
}

int main() {
    int n;
    cin >> n;
    if (n < 2 || n > 12)
        return -1;
    int result = factorial(n);
    cout << result << endl;
    return 0;
}

