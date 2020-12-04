#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++) {
        cin >> A[i];
        A[i] -= 1;
    }
    vector<int> B(N);
    for(int i = 0; i < N; i++) {
        cin >> B[i];
    }
    vector<int> C(N-1);
    for(int i = 0; i < N-1; i++) {
        cin >> C[i];
    }
    int total = 0;
    int prev = N;
    for(int i = 0; i < N; i++) {
        total += B[A[i]];
        if(prev+1 == A[i]) {
            total += C[prev];
        }
        prev = A[i];
    }
    cout << total << endl;
    return 0;
}
