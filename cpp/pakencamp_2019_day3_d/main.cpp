#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<vector<char> > flag(5, vector<char>(N));
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < N; j++) {
            cin >> flag[i][j];
        }
    }

    vector<vector<int> > dp(N, vector<int>(3, 0));

    char table[3] = {'R', 'B', 'W'};
    for(int i = 0; i < 3; i++) {
        int count = 0;
        for(int j = 0; j < 5; j++) {
            if(flag[j][0] != table[i]) {
                count += 1;
            }
        }
        dp[0][i] = count;
    }
            
    for(int i = 1; i < N; i++) {
        for(int j = 0; j < 3; j++) {
            int count = 0;
            for(int k = 0; k < 5; k++) {
                if(flag[k][i] != table[j]) {
                    count += 1;
                }
            }
            if(dp[i-1][(j+1)%3] <= dp[i-1][(j+2)%3]) {
                dp[i][j] = dp[i-1][(j+1)%3] + count;
            } else {
                dp[i][j] = dp[i-1][(j+2)%3] + count;
            }
        }
    }

    cout << min(dp[N-1][0], min(dp[N-1][1], dp[N-1][2])) << endl;

    return 0;
}
