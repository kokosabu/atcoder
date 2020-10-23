#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;
    vector<int> a(N);
    for(int i = 0; i < a.size(); i++) {
        a[i] = 0;
    }
    for(int i = 0; i < Q; i++) {
        int L, R, T;
        cin >> L >> R >> T;
        for(int j = L; j <= R; j++) {
            a[j-1] = T;
        }
    }
    for(int i = 0; i < a.size(); i++) {
        cout << a[i] << endl;
    }
    return 0;
}
