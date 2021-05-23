#include <iostream>
using namespace std;

int main()
{
    string S;
    cin >> S;
    for(int i = 0; i < S.size(); i++) {
        if(S[S.size()-1-i] == '0') {
            cout << '0';
        } else if(S[S.size()-1-i] == '1') {
            cout << '1';
        } else if(S[S.size()-1-i] == '6') {
            cout << '9';
        } else if(S[S.size()-1-i] == '8') {
            cout << '8';
        } else if(S[S.size()-1-i] == '9') {
            cout << '6';
        }
    }
    cout << endl;
    return 0;
}
