#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    int A[800][800];
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }

    int min = INT_MAX;
    for(int i = 0; i <= N-K; i++) {
        for(int j = 0; j <= N-K; j++) {
            vector<int> X;
            int count = 0;
            for(int k = 0; k < K; k++) {
                for(int l = 0; l < K; l++) {
                    X.push_back(A[i+k][j+l]);
                    if(A[i+k][j+l] >= min) {
                        count +=1;
                        if(count > K*K/2) {
                            goto end;
                        }
                    }
                }
            }
            sort(X.begin(), X.end(), greater<int>());

            if(X[K*K/2] < min) {
                min = X[K*K/2];
            }
end:
            ;
        }
    }

    cout << min << endl;

    return 0;
}

#if 0
struct pond {
    int A;
    int i;
    int j;

    bool operator>(const pond& right) const {
        return A > right.A;
    }
    bool operator<(const pond& right) const {
        return A < right.A;
    }
};

int main()
{
    int N, K;
    cin >> N >> K;

    int A[800][800];
    vector<pond> X;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cin >> A[i][j];
            struct pond x;
            x.A = A[i][j];
            x.i = i;
            x.j = j;
            X.push(x);
        }
    }

    sort(X.begin(), X.end());
    int best_pond;
    int 
    if((K*K)%2 == 0) {
        best_pond = X[


    return 0;
}
#endif

#if 0
int main()
{
    int N, K;
    cin >> N >> K;

    int A[800][800];
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }

    int min = INT_MAX;
    for(int i = 0; i <= N-K; i++) {
        for(int j = 0; j <= N-K; j++) {
            vector<int> X;
            for(int k = 0; k < K; k++) {
                for(int l = 0; l < K; l++) {
                    X.push_back(A[i+k][j+l]);
                }
            }
            sort(X.begin(), X.end(), greater<int>());

            if(X[K*K/2] < min) {
                min = X[K*K/2];
            }
        }
    }

    cout << min << endl;

    return 0;
}
#endif
