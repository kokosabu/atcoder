#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, K;
    vector<int> p;

    cin >> N >> K;
    for(int i = 0; i < N; i++) {
        int _p;
        cin >> _p;
        p.push_back(_p);
    }
    sort(p.begin(), p.end());

    int answer = 0;
    for(int i = 0; i < K; i++) {
        answer += p[i];
    }

    cout << answer << endl;

    return 0;
}
