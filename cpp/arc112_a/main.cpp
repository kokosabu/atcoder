#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;

    for(int i = 0; i < T; i++) {
        int L, R;
        cin >> L >> R;

        long diff = R - L;
        long diff2 = diff - L;
        if(diff2 >= 0) {
            long count = (1+diff2+1) * (diff2+1) / 2;
            cout << count << endl;
        } else {
            cout << 0 << endl;
        }
    }

    // 6 - 2 = 4
    // 4 - 2 = 2
    //
    // 0 - 0 = 0
    // 0 - 0 = 0
    //
    // 100 - 100 = 0
    // 0 - 100 = -100

    // 1 + 2 + 3(1+diff)
    // (1+3)*2

    return 0;
}
