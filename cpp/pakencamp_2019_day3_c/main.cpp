#include <iostream>
using namespace std;

int main()
{
    int N, M;
    int A[100][100];
    long long max_sum;
    long long sum;
    int i, j, k;

    cin >> N >> M;
    for(i = 0; i < N; i++) {
        for(j = 0; j < M; j++) {
            cin >> A[i][j];
        }
    }

    max_sum = 0;
    for(i = 0; i < (M-1); i++) {
        for(j = i+1; j < M; j++) {
            sum = 0;
            for(k = 0; k < N; k++) {
                if(A[k][i] >= A[k][j]) {
                    sum += A[k][i];
                } else {
                    sum += A[k][j];
                }
            }
            if(sum > max_sum) {
                max_sum = sum;
            }
        }
    }
    cout << max_sum << endl;

    return 0;
}
