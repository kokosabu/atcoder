#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for(int n = 0; n < N; n++) {
        cin >> A[n];
    }

    int min = *min_element(A.begin(), A.end());
    int max = *max_element(A.begin(), A.end());

    cout << (max - min) << endl;
    return 0;
}
