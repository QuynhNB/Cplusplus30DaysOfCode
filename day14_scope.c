#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
		// Add your code here
    Difference(vector<int> a)
    {
        this->elements = a;
        this->maximumDifference = 0;
    }

    void computeDifference()
    {
        for(int i = 0; i < this->elements.size() - 1; i++)
        {
            for(int j = 1; j < this->elements.size(); j++)
            {
                if(abs(this->elements[i] - this->elements[j]) > maximumDifference)
                    this->maximumDifference = abs(this->elements[i] - this->elements[j]);
            }
        }
    }
}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}
