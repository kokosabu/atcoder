#include <iostream>
using namespace std;

enum {
    P = 0,
    W = 1,
    G = 2,
    Y = 3
};

int main()
{
    bool is_found[4] = { false, false, false, false };

    int N;
    cin >> N;

    for(int i = 0; i < N; i++) {
        char S;
        cin >> S;
        if(S == 'P') {
            is_found[P] = true;
        } else if(S == 'W') {
            is_found[W] = true;
        } else if(S == 'G') {
            is_found[G] = true;
        } else if(S == 'Y') {
            is_found[Y] = true;
        }
    }

    int count = 0;
    for(int i = 0; i < 4; i++) {
        if(is_found[i] == true) {
            count += 1;
        }
    }

    if(count == 3) {
        cout << "Three" << endl;
    } else {
        cout << "Four" << endl;
    }

    return 0;
}
