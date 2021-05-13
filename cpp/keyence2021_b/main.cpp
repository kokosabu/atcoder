#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    vector<int> bin(N);

    for(int i = 0; i < N; i++) {
        bin[i] = 0;
    }

    for(int i = 0; i < N; i++) {
        int ball;
        cin >> ball;
        bin[ball] += 1;
    }


    int sum = 0;
    int rem = K;
    for(int i = 0; i < N; i++) {
        if(bin[i] >= rem) {
            ;
        } else {
            sum += (rem - bin[i]) * i;
            rem = bin[i];
        }

        if(rem == 0) {
            break;
        }
    }
    cout << sum << endl;

    return 0;
}
