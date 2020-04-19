#include <iostream>
using namespace std;

int main()
{
    int N, M, A;
    cin >> N >> M;
    for(int i = 0; i < M; i++) {
        cin >> A;
        N -= A;
    }
    if(N >= 0) {
        cout << N << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}
