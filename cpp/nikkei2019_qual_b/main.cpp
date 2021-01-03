#include <iostream>

using namespace std;

int main()
{
    int N;
    string A, B, C;
    cin >> N;
    cin >> A;
    cin >> B;
    cin >> C;

    int count = 0;
    for(int i = 0; i < N; i++) {
        if(A[i] == B[i] && B[i] == C[i]) {
            count += 0;
        } else if(A[i] == B[i]) {
            count += 1;
        } else if(B[i] == C[i]) {
            count += 1;
        } else if(C[i] == A[i]) {
            count += 1;
        } else {
            count += 2;
        }
    }

    cout << count << endl;

    return 0;
}
