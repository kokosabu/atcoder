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
    }

    int sum = 0;
    for(int i = 1; i < N; i++) {
        for(int j = 0; j < i; j++) {
            sum += (A[j]-A[i]) * (A[j]-A[i]);
        }
    }

    cout << sum << endl;

    return 0;
}
