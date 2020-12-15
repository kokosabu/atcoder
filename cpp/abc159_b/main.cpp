#include <iostream>
using namespace std;

int main()
{
    string S;
    cin >> S;
    int N;
    N = S.size();
    bool is_strong = true;
    for(int i = 0; i < N/2; i++) {
        if(S[i] != S[N-1-i]) {
            is_strong = false;
            break;
        }
    }
    for(int i = 0; i < N/4; i++) {
        if(S[i] != S[N/2-1-i]) {
            is_strong = false;
            break;
        }
    }
    for(int i = 0; i < (N-(N+3/2))/2; i++) {
        if(S[(N+3/2)-1+i] != S[N-1-i]) {
            is_strong = false;
            break;
        }
    }
    if(is_strong) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
