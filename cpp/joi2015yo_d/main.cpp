#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> D(N);
    for(int i = 0; i < N; i++) {
        cin >> D[i];
    }

    vector<int> C(M);
    for(int i = 0; i < M; i++) {
        cin >> C[i];
    }

    vector<vector<int> > dp(M+1, vector<int>(N+1, 0));

    for(int i = 1; i <= M; i++) {
        for(int j = 1; j <= i && j <= N; j++) {
            if (dp[i-1][j] == 0 || dp[i-1][j] > dp[i-1][j-1] + C[i-1]*D[j-1]) {
                dp[i][j] = dp[i-1][j-1] + C[i-1]*D[j-1];
            } else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    cout << dp[M][N] << endl;

    return 0;
}
