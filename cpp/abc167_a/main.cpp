#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    string T;
    cin >> S;
    cin >> T;
    bool flag = false;
    for(int i = 0; i < S.size(); i++) {
        if(S[i] != T[i]) {
            flag = true;
        }
    }
    if(flag) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
    return 0;
}
