#include <iostream>
#include <climits>
using namespace std;

int main()
{
    unsigned long long N;
    cin >> N;

    unsigned long long min = ULLONG_MAX;
    unsigned long long base = 1;
    for(int b = 0; b <= 60; b++) {
        unsigned long long a = N / base;
        unsigned long long c = N % base;
        if((a+b+c) < min) {
            min = a + b + c;
        }
        base *= 2;
    }
    cout << min << endl;
    return 0;
}
