#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

struct Friend {
    unsigned long long A;
    unsigned long long B;
    bool operator<( const Friend& right ) const {
        return A < right.A;
    }
};

int main()
{
    int N;
    unsigned long long K;
    cin >> N >> K;

    vector<Friend> F(N+1);
    for(int i = 0; i < N; i++) {
        cin >> F[i].A >> F[i].B;
    }
    F[N].A = ULLONG_MAX;
    F[N].B = 0;
    sort(F.begin(), F.end());

    unsigned long long current = 0;
    int next_friend = 0;
    while(K > 0) {
        if(F[next_friend].A <= (current + K)) {
            K -= (F[next_friend].A - current);
            current = F[next_friend].A;
            K += F[next_friend].B;
            next_friend += 1;
        } else {
            current += K;
            K = 0;
        }
    }
    cout << current << endl;

    return 0;
}
