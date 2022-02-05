#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    unsigned long long N;
    cin >> N;

    int keta;
    unsigned long long tmp = N;
    for(keta = 0; tmp > 0; tmp /= 10) {
        keta += 1;
    }

    unsigned long long answer = 0;
    unsigned long long n;
    for(int i = 1; i <= keta; i++) {
        if(i == keta) {
            // n = N - (unsigned long long)(pow(10, keta-1)-1);
            n = N - ((unsigned long long)pow(10, keta-1)-1);
        } else {
            n = (unsigned long long)9 * (unsigned long long)pow(10, i-1);
            // n = 9 * pow(10, i-1);
        }
        n %= 998244353;
        answer += n * (n+1) / 2;
        answer %= 998244353;
    }

    cout << answer << endl;

    return 0;
}
