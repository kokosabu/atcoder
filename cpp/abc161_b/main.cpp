#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    int sum = 0;
    for(int i = 0; i < N; i++) {
        cin >> A[i];
        sum += A[i];
    }
    sort(A.begin(), A.end(), greater<int>());

    bool success = true;
    float border = (float)sum / (4 * M);

    for(int i = 0; i < M; i++) {
        if(border > A[i]) {
            success = false;
            break;
        }
    }

    if(success) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
