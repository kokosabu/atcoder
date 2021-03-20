#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    unsigned long long N;
    cin >> N;

    unsigned long long count = 0;
    int base = 0;
    int digit = 2;

    bool done = false;
    while(!done) {
        unsigned long long start = pow(10, base);
        unsigned long long end = pow(10, base+1);
        unsigned long long left_base = pow(10, digit/2);
        unsigned long long left = start * left_base;
        for(unsigned long long right = start; right < end; right++) {
            unsigned long long doubled = left + right;
            if(doubled <= N) {
                count += 1;
                // cout << count << " : " << doubled << endl;
            } else {
                done = true;
                break;
            }
            left += left_base;
        }
        base += 1;
        digit += 2;
    }

    cout << count << endl;

    return 0;
}
