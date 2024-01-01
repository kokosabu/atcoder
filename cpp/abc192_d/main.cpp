#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string X;
    cin >> X;
    unsigned long long N;
    cin >> N;

    int max = 0;
    for(int i = 0; i < X.size(); i++) {
        if((max+'0') < X[i]) {
            max = X[i] - '0';
        }
    }

    int base = max + 1;

    int left = -1;
    int right = base;
    while(1) {
        unsigned long long digit = 1;
        unsigned long long number = 0;
        for(int i = X.size()-1; i >= 0; i--) {
            number += digit * (X[i] - '0');
            digit *= base;
        }

        if(left == (right+1)) {
            break;
        }
        if(digit > (N/base)) {
            base += 1;
            break;
        }
        
        if(number <= N && left == -1) {
            right = base;
            base *= 2;
        } else if(number <= N) {
            right = base;
            base = (left + right) / 2;
        } else if(number > N) {
            left = base;
            base = (left + right) / 2;
        }

        cout << "left: " << left << ", right: " << right << ", base: " << base << endl;
    }

    cout << base-(max+1) << endl;
    return 0;
}
