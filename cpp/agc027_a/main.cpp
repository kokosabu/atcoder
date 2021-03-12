#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, x;
    cin >> N >> x;

    vector<int> a(N);
    for(int i = 0; i < N; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int count = 0;
    for(int i = 0; i < N; i++) {
        if(x > a[i] && i == N-1) {
            ;
        } else if(x >= a[i]) {
            count += 1;
            x -= a[i];
        } else if(a[i] >= x) {
            break;
        }
    }

    cout << count << endl;

    return 0;
}
