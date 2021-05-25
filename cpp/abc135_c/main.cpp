#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> A(N+1);
    for(int i = 0; i < N+1; i++) {
        cin >> A[i];
    }

    unsigned long long sum = 0;
    for(int i = 0; i < N; i++) {
        int B;
        cin >> B;

        if(A[i] > B) {
            sum += B;
        } else if(A[i+1] > (B-A[i])) {
            A[i+1] -= (B - A[i]);
            sum += B;
        } else {
            sum += A[i] + A[i+1];
            A[i+1] = 0;
        }
    }

    cout << sum << endl;

    return 0;
}
