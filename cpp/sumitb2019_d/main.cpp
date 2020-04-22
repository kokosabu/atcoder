#include <iostream>
#include <string>

using namespace std;

int main()
{
    int count[1000];
    int x[10];
    int y[10][10];
    int N;
    string S;
    int ans;
    int i, j, k;
    int idx;
    cin >> N;
    cin >> S;
    for(i = 0; i < 1000; i++) {
        count[i] = 0;
    }
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            y[i][j] = 0;
        }
        x[i] = 0;
    }
    ans = 0;
    for(i = 0; i < S.length()-2; i++) {
        if(x[S[i]-'0'] == 1) {
            continue;
        }
        for(j = i+1; j < S.length()-1; j++) {
            if(y[S[i]-'0'][S[j]-'0'] == 1) {
                continue;
            }
            for(k = j+1; k < S.length(); k++) {
                idx = (S[i]-'0')*100 + (S[j]-'0')*10 + (S[k]-'0');
                if(count[idx] == 0) {
                    count[idx] = 1;
                    ans += 1;
                }
            }
            y[S[i]-'0'][S[j]-'0'] = 1;
        }
        x[S[i]-'0'] = 1;
    }
    cout << ans << endl;
    return 0;
}
