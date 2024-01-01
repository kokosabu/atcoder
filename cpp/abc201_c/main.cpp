#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string S;
    cin >> S;

    int o_count = 0;
    int x_count = 0;
    int q_count = 0;

    for(int i = 0; i < 10; i++) {
        if(S[i] == 'o') {
            o_count += 1;
        } else if(S[i] == 'x') {
            x_count += 1;
        } else {
            q_count += 1;
        }
    }

    if(o_count == 1) {
        cout << (int)(pow(q_count+1, 4) - pow(q_count, 4)) << endl;
    } else if(o_count == 2) {
        cout << (int)(pow(q_count+2, 4) - pow(q_count, 4) - 4*2*pow(q_count, 3)) << endl;
    } else if(o_count == 3) {
        cout << 24*q_count + 36 << endl;
    } else if(o_count == 4) {
        cout << 24 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}
