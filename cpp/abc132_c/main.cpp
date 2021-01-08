#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> d(N);
    for(int i = 0; i < N; i++) {
        cin >> d[i];
    }

    sort(d.begin(), d.end());

    int count = d[d.size()/2] - d[d.size()/2-1];

    cout << count << endl;

    return 0;
}
