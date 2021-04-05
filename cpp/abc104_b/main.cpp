#include <iostream>
using namespace std;

int main()
{
    string S;
    cin >> S;

    bool is_AC = true;
    if(S[0] != 'A') {
        is_AC = false;
    }

    int C_count = 0;
    int C_index = -1;
    for(int i = 2; i < S.size()-1; i++) {
        if(S[i] == 'C') {
            C_count += 1;
            C_index = i;
        }
    }
    if(C_count != 1) {
        is_AC = false;
    }

    for(int i = 1; i < S.size(); i++) {
        if(i == C_index) {
            continue;
        }
        if(S[i] >= 'A' && S[i] <= 'Z') {
            is_AC = false;
        }
    }

    if(is_AC) {
        cout << "AC" << endl;
    } else {
        cout << "WA" << endl;
    }

    return 0;
}
