#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<bool> AC(N);
    vector<int> WA(N);
    for(int i = 0; i < N; i++) {
        AC[i] = false;
        WA[i] = 0;
    }

    int count_AC = 0;
    int count_WA = 0;
    for(int i = 0; i < M; i++) {
        int p;
        string S;

        cin >> p >> S;

        if(AC[p-1] == false && S == "WA") {
            WA[p-1] += 1;
        } else if(AC[p-1] == false && S == "AC") {
            AC[p-1] = true;
            count_AC += 1;
            count_WA += WA[p-1];
        }
    }

    cout << count_AC << " " << count_WA << endl;

    return 0;
}
