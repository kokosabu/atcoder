#include <iostream>
using namespace std;

int main()
{
    long long N, K;
    cin >> N >> K;

    cout << min(N%K, abs((N%K)-K)) << endl;
    return 0;
}
