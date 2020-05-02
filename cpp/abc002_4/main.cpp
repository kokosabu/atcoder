#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int x[M], y[M];
    for(int i = 0; i < M; i++) {
        cin >> x[i] >> y[i];
    }
    int bit = 1 << N;
    int max = 0;
    int i, j, k, l;
    for(i = 0; i < bit; i++) {
        //cout << "bit: " << i << endl;
        for(j = 0; j < N-1; j++) {
            if((i & (1<<j)) == 0) {
                //cout << i << endl;
                continue;
            }
            for(k = j+1; k < N; k++) {
                if((i & (1<<k)) != 0) {
                    for(l = 0; l < M; l++) {
                        //cout << i << ", " << j << ", " << k << ", " << l << endl;
                        //cout << x[l] << ", " << y[l] << endl;
                        //cout << j+1 << ", " << k+1 << endl;
                        if((x[l] == (j+1) && y[l] == (k+1)) ||
                           (x[l] == (k+1) && y[l] == (j+1))) {
                            break;
                        }
                    }

                    if(l != M) {
                        /* 見つかった */
                        continue;
                    } else {
                        /* 見つからなかった　*/
                        break;
                    }
                }
            }
            if(k != N) {
                /* 見つからなかった　*/
                break;
            }
        }
        //cout << j << endl;
        if(j == N-1) {
            if(__builtin_popcount(i) > max) {
                max = __builtin_popcount(i);
            }
        }
    }
    cout << max << endl;
    return 0;
}
