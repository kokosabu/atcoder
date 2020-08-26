#include <iostream>
using namespace std;

int main()
{
    int N, L;
    string S;
    cin >> N >> L;
    cin >> S;

    int crash_count = 0;
    int tab = 1;
    for(int i = 0; i < N; i++) {
        if(S[i] == '+') {
            tab += 1;
        } else {
            tab -= 1;
        }

        if(tab > L) {
            crash_count += 1;
            tab = 1;
        }
    }
    cout << crash_count << endl;
    return 0;
}
