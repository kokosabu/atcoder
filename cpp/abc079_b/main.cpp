#include <iostream>
using namespace std;

unsigned long long L(unsigned long long memo[], unsigned long long i);

unsigned long long L(unsigned long long memo[], unsigned long long i)
{
    if(memo[i] == 0) {
        if(i == 0) {
            memo[i] = 2;
        } else if(i == 1) {
            memo[i] = 1;
        } else {
            memo[i] = L(memo, i-1) + L(memo, i-2);
        }
    }

    return memo[i];
}

int main()
{
    unsigned long long N;
    cin >> N;

    unsigned long long memo[86+1] = {};
    cout << L(memo, N) << endl;
    return 0;
}
