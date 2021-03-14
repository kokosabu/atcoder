#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Baggage {
    int W;
    int V;

    bool operator<(const Baggage& another) const {
        return V > another.V;
    }
};

int main()
{
    int N, M, Q;
    cin >> N >> M >> Q;

    vector<Baggage> baggages(N);
    for(int i = 0; i < N; i++) {
        cin >> baggages[i].W >> baggages[i].V;
    }
    sort(baggages.begin(), baggages.end());

    vector<int> X(M);
    int max_size = 0;
    for(int i = 0; i < M; i++) {
        cin >> X[i];
        if(X[i] > max_size) {
            max_size = X[i];
        }
    }

    vector<bool> used(M);
    for(int i = 0; i < Q; i++) {
        int L, R;
        cin >> L >> R;
        L -= 1;
        R -= 1;
        for(int j = 0; j < L; j++) {
            used[j] = false;
        }
        for(int j = L; j <= R; j++) {
            used[j] = true;
        }
        for(int j = R+1; j < M; j++) {
            used[j] = false;
        }

        unsigned long long V_sum = 0;
        for(int j = 0; j < N; j++) {
            int max = max_size + 1;
            int max_i = -1;
            for(int k = 0; k < M; k++) {
                if(!used[k] && X[k] >= baggages[j].W && X[k] < max) {
                    max = X[k];
                    max_i = k;
                }
            }
            if(max_i != -1) {
                V_sum += baggages[j].V;
                used[max_i] = true;
            }
        }

        cout << V_sum << endl;
    }

    return 0;
}
