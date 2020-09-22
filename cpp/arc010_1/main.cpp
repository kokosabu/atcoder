#include <iostream>
using namespace std;

int main()
{
    int N, M, A, B;
    cin >> N >> M >> A >> B;
    int out = -1;
    for(int m = 0; m < M; m++) {
        if(N <= A) {
            N += B;
        }

        int c;
        cin >> c;

        N -= c;
        if(N < 0 && out == -1) {
            out = m + 1;
        }
    }
    if(out == -1) {
        cout << "complete" << endl;
    } else {
        cout << out << endl;
    }

    return 0;
}
