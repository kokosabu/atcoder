#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int t[N][5];
    for(int i = 0; i < N; i++) {
        cin >> t[i][0] >> t[i][1] >> t[i][2] >> t[i][3] >> t[i][4];
    }

    int pmax[5] = {};
    for(int i = 0; i < N; i++) {
        pmax[0] = max(pmax[0], t[i][0]);
        pmax[1] = max(pmax[1], t[i][1]);
        pmax[2] = max(pmax[2], t[i][2]);
        pmax[3] = max(pmax[3], t[i][3]);
        pmax[4] = max(pmax[4], t[i][4]);
    }

    int answer = INT_MAX;
    for(int i = 0; i < 5; i++) {
        answer = min(answer, pmax[i]);
    }

    cout << answer << endl;

    return 0;
}
