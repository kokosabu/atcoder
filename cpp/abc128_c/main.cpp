#include <iostream>
using namespace std;

int main()
{
    int N, M;
    int K[10];
    int S[10][10];
    int P[10];
    int i, j, k;
    int x;
    int count;
   
    cin >> N >> M;
    for(i = 0; i < M; i++) {
        cin >> K[i];
        for(j = 0; j < K[i]; j++) {
            cin >> S[i][j];
        }
    }
    for(i = 0; i < M; i++) {
        cin >> P[i];
    }

    count = 0;
    for(i = 0; i < (1<<N); i++) {
        //cout << "i: " << i << endl;
        for(j = 0; j < M; j++) {
            //cout << "j: "<< j << endl;
            x = 0;
            for(k = 0; k < K[j]; k++) {
                //cout << "i: " << i << "  -  S[j][k]" << S[j][k] << endl;
                if((i & (1<<(S[j][k]-1))) != 0) {
                    x += 1;
                }
            }
            if(P[j] != x%2) {
                break;
            }
        }
        if(j == M) {
            count += 1;
        }
    }
    cout << count << endl;

    return 0;
}
