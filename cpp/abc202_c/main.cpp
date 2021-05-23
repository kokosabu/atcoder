#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> B(N);
    vector<int> C(N);

    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for(int i = 0; i < N; i++) {
        cin >> B[i];
    }
    for(int i = 0; i < N; i++) {
        cin >> C[i];
    }

    vector<int> BC(N+1);
    for(int i = 0; i < N; i++) {
        BC[i] = 0;
    }
    for(int i = 0; i < N; i++) {
        BC[B[C[i]-1]] += 1;
    }

    unsigned long long count = 0;
    for(int i = 0; i < N; i++) {
        count += BC[A[i]];
    }

    cout << count << endl;

    return 0;
}
