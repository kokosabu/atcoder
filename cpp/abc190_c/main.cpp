#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int A[M], B[M];
    for(int i = 0; i < M; i++) {
        cin >> A[i] >> B[i];
    }
    int K;
    cin >> K;
    int C[K], D[K];
    for(int i = 0; i < K; i++) {
        cin >> C[i] >> D[i];
    }

    int max = 0;
    int pattern = pow(2, K);
    for(int i = 0; i < pattern; i++) {
        int dishes[100+1] = {};
        int t = i;
        for(int j = 0; j < K; j++) {
            if((t&1) == 0) {
                dishes[C[j]] = 1;
            } else {
                dishes[D[j]] = 1;
            }
            t = t >> 1;
        }

        int count = 0;
        for(int i = 0; i < M; i++) {
            if(dishes[A[i]] == 1 && dishes[B[i]] == 1) {
                count += 1;
            }
        }
        if(count > max) {
            max = count;
        }
    }

    cout << max << endl;
    return 0;
}
