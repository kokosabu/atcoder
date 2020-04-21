#include <iostream>
using namespace std;

int main()
{
    long long N;
    long long A, B, tmp;
    int cur, a, b;
    int ans;

    cin >> N;
    tmp = N;
    for(ans = 1; ans <= 11; ans++) {
        tmp /= 10;
        if(tmp == 0) {
            break;
        }
    }
    for(A = 1; A <= N; A++) {
        if(A*A > N) {
            break;
        }
        if(N%A != 0) {
            continue;
        }
        B = N/A;

        tmp = A;
        for(a = 1; a <= 11; a++) {
            tmp /= 10;
            if(tmp == 0) {
                break;
            }
        }
        tmp = B;
        for(b = 1; b <= 11; b++) {
            tmp /= 10;
            if(tmp == 0) {
                break;
            }
        }
        cur = max(a, b);

        if(ans > cur) {
            ans = cur;
        }
    }
    cout << ans << endl;;

    return 0;
}
