#include <iostream>

using namespace std;

int main()
{
    int N;
    int A[15];
    int x[15][15];
    int y[15][15];
    int i, j, k;
    int p, q;
    int count;
    int max;
    int flag;

    cin >> N;
    for(i = 0; i < N; i++) {
        cin >> A[i];
        for(j = 0; j < A[i]; j++) {
            cin >> x[i][j] >> y[i][j];
            x[i][j]--;
        }
    }

    //    N:0, 1, 2, 3, ...
    // 1<<N:1, 2, 4, 8, ...
    max = 0;
    for(i = 0; i < (1<<N); i++) {
        //cout << "i: " << i << endl;
        flag = 1;
        count = 0;
        for(j = 0; j < N; j++) {
            //cout << "j: " << j << endl;
            p = i & (1<<j);
            if(p != 0) {
                /* 正直もの */
                count++;
                for(k = 0; k < A[j]; k++) {
                    // xビット取り出して
                    q = i & (1 << x[j][k]);
                    if(q != 0) {
                        q = 1;
                    }
                    // yになっているか?
                    // なっていない場合 矛盾
                    if(q != y[j][k]) {
                        flag = 0;
                    }
                }
            } else {
                /* 不親切は無視 */;
            }
        }
        if(flag == 1 && count > max) {
            max = count;
        }
    }
    cout << max << endl;
    return 0;
}
