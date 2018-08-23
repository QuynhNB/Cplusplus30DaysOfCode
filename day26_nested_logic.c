#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    unsigned int actualDay = 0;
    unsigned int actualMonth = 0;
    unsigned int actualYear = 0;
    unsigned int expectDay = 0;
    unsigned int expectMonth = 0;
    unsigned int expectYear = 0;
    int fine = 0;
    
    cin >> actualDay >> actualMonth >> actualYear;
    cin >> expectDay >> expectMonth >> expectYear;

    if((actualDay < 1) || (actualDay > 31) || (actualMonth < 1) || (actualMonth > 12) || (actualYear < 1) || (actualYear > 3000) || \
        (expectDay < 1) || (expectDay > 31) || (expectMonth < 1) || (expectMonth > 12) || (expectYear < 1) || (expectYear > 3000) )
    {
        return -1;
    }
    if(actualYear < expectYear) {
        goto end;
    }
    else if(actualYear == expectYear) {
        if(actualMonth < expectMonth) {
            goto end;
        }
        else if(actualMonth == expectMonth) {
            if(actualDay <= expectDay){
                goto end;
            }
            else {
                fine = 15 * (actualDay - expectDay);
                goto end;
            }
        }
        else {
            fine = 500 * (actualMonth - expectMonth);
            goto end;
        }
    }
    else {
        fine = 10000;
        goto end;
    }
end:
    cout << fine;
    return 0;
}

