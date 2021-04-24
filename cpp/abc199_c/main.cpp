#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    string s;
    cin >> s;
    int Q;
    cin >> Q;

    string S[2];
    S[0] = s.substr(0, N);
    S[1] = s.substr(N);
    int swap = 0;

    for(int i = 0; i < Q; i++) {
        int T, A, B;
        cin >> T >> A >> B;
        if(T == 1) {
            if(A <= N && B <= N) {
                char tmp = S[swap][A-1];
                S[swap][A-1] = S[swap][B-1];
                S[swap][B-1] = tmp;
            } else if(A <= N && B > N) {
                char tmp = S[swap][A-1];
                S[swap][A-1] = S[1-swap][(B-N)-1];
                S[1-swap][(B-N)-1] = tmp;
            } else if(A > N && B <= N) {
                char tmp = S[1-swap][(A-N)-1];
                S[1-swap][(A-N)-1] = S[swap][B-1];
                S[swap][B-1] = tmp;
            } else {
                char tmp = S[1-swap][(A-N)-1];
                S[1-swap][(A-N)-1] = S[1-swap][(B-N)-1];
                S[1-swap][(B-N)-1] = tmp;
            }
        } else {
            swap = 1 - swap;
        }
    }

    cout << S[swap] << S[1-swap] << endl;

    return 0;
#if 0
    for(int i = 0; i < Q; i++) {
        int T, A, B;
        cin >> T >> A >> B;
        if(T == 1) {
            char tmp = S[A-1];
            S[A-1] = S[B-1];
            S[B-1] = tmp;
        } else {
            S = S.substr(N) + S.substr(0, N);
        }
    }

    cout << S << endl;;

    return 0;
#endif
}
