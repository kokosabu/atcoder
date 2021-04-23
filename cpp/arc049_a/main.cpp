#include <iostream>
using namespace std;

int main()
{
    string S;
    cin >> S;
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    int i = 0;
    while(i < A) {
        cout << S[i];
        i += 1;
    }
    cout << "\"";
    while(i < B) {
        cout << S[i];
        i += 1;
    }
    cout << "\"";
    while(i < C) {
        cout << S[i];
        i += 1;
    }
    cout << "\"";
    while(i < D) {
        cout << S[i];
        i += 1;
    }
    cout << "\"";
    while(i < S.size()) {
        cout << S[i];
        i += 1;
    }
    cout << endl;

    return 0;
}
