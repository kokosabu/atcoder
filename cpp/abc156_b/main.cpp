#include <iostream>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    int digit = 1;
    int max = K;
    while(N >= max) {
        digit += 1;
        max *= K;
    }
    cout << digit << endl;
    return 0;
}
