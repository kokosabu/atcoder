#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());
    reverse(A.begin(), A.end());

    int first_sum = 0;
    for(int i = 0; i < N; i++) {
        if((i%2) == 0) {
            first_sum += A[i];
        }
    }

    cout << first_sum << endl;

    return 0;
}
