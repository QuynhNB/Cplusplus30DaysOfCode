#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <limits>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    float mealCost, totalMealCost;
    int tipPercent;
    int taxPercent;
    cin >> mealCost;
    cin >> tipPercent;
    cin >> taxPercent;
    totalMealCost = mealCost + (mealCost * tipPercent/100) + (mealCost * taxPercent/100);
    cout << "The total meal cost is " << fixed << setprecision(0) << totalMealCost << " dollars." << endl;
    
    return 0;
}

