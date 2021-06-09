#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct shop {
    int A;
    int B;

    bool operator<(const shop& right) const {
        if(A < right.A) {
            return true;
        }
        if(A == right.A && B < right.B) {
            return true;
        }
        return false;
    }
};

int main()
{
    int N, M;
    cin >> N >> M;
    vector<shop> S(N);
    for(int i = 0; i < N; i++) {
        cin >> S[i].A >> S[i].B;
    }
    sort(S.begin(), S.end());
    unsigned long long sum = 0;
    for(int i = 0; i < N; i++) {
        if(S[i].B < M) {
            sum += (unsigned long long)S[i].A * S[i].B;
            M -= S[i].B;
        } else {
            sum += (unsigned long long)S[i].A * M;
            M = 0;
            break;
        }
    }
    cout << sum << endl;
    return 0;
}
