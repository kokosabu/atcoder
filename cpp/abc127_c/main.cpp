#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int l_max = 1;
    int r_min = N;
    for(int i = 0; i < M; i++) {
        int L, R;
        cin >> L >> R;

        if(L > l_max) {
            l_max = L;
        }
        if(R < r_min) {
            r_min = R;
        }
    }
    if(l_max <= r_min) {
        cout << (r_min-l_max)+1 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}
