#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    string S;
    cin >> S;
    if((N%2) == 1) {
        cout << "No" << endl;
        return 0;
    }
    bool is_repeat = true;
    for(int i = 0; i < N/2; i++) {
        if(S[i] != S[i+N/2]) {
            is_repeat = false;
        }
    }
    if(is_repeat) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
