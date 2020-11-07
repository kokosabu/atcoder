#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    vector<int> l(N);
    for(int i = 0; i < N; i++) {
        cin >> l[i];
    }
    sort(l.begin(), l.end());
    int sum = 0;
    for(int i = 0; i < K; i++) {
        sum += l[N-1-i];
    }

    cout << sum << endl;

    return 0;
}
