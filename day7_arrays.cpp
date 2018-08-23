#include <vector>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;



int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    if((n < 1) || (n > 1000))
        return -1;
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
       if((arr[arr_i] < 1) || (arr[arr_i] > 10000))
        return -1;
    }
    for(int arr_j = n - 1; arr_j >= 0; arr_j--)
        cout << arr[arr_j] << " ";
    return 0;
}


