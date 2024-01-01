#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> n(N);
    for(int i = 0; i < N; i++) {
        cin >> n[i];
    }

    vector<vector<unsigned long long> > dp(N+1, vector<unsigned long long>(21, 0));
    dp[0][0] = 1;
    dp[1][n[0]] = 1;

    for(int i = 1; i < N-1; i++) {
        for(int j = 0; j <= 20; j++) {
            if((j-n[i]) >= 0) {
                dp[i+1][j] += dp[i][j-n[i]];
            }
            if((j+n[i]) <= 20) {
                dp[i+1][j] += dp[i][j+n[i]];
            }
        }
    }

    cout << dp[N-1][n[N-1]] << endl;
}
