#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;
    vector<unsigned long long> A(N);
    vector<unsigned long long> B(N);
    for(int i = 0; i < N; i++) {
        cin >> A[i];
        B[i] = A[i] - i;
    }

    for(int i = 0; i < Q; i++) {
        unsigned long long K;
        cin >> K;

        // vector<unsigned long long>::iterator itr = lower_bound(B.begin(), B.end(), K);
        vector<unsigned long long>::iterator itr = upper_bound(B.begin(), B.end(), K);
        int j = distance(B.begin(), itr);

        // vector<unsigned long long>::iterator itr = lower_bound(A.begin(), A.end(), K);
        // int j = distance(A.begin(), itr);

        // cout << *itr << endl;
        // cout << j << endl;
        // cout << "--" << endl;
        K += j;
        while(j < N) {
            if(K < A[j]) {
                break;
            }
            K += 1;
            j += 1;
        }
        
        //cout << answer << endl;
        cout << K << endl;
    }

    // for(int i = 0; i < N; i++) {
    //     cout << i << ":" << A[i] << endl;
    // }

    return 0;
}
