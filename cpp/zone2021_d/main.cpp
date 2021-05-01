#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    cin >> S;
    string T = "";

    bool is_reverse = false;
    for(int i = 0; i < S.size(); i++) {
        // cout << i << endl;
        // cout << T << endl;
        if(S[i] == 'R') {
            is_reverse = !is_reverse;
        } else {
            if(T.size() == 0) {
                T.insert(0, S.substr(i, 1));
            } else if(!is_reverse) {
                if(T[T.size()-1] != S[i]) {
                    T.insert(T.size(), S.substr(i, 1));
                } else {
                    T = T.substr(0, T.size()-1);
                }
            } else {
                if(T[0] != S[i]) {
                    T.insert(0, S.substr(i, 1));
                } else {
                    T = T.substr(1, T.size()-1);
                }
            }
        }
    }

    if(is_reverse) {
        reverse(T.begin(), T.end());
    }

    cout << T << endl;

    return 0;
}
