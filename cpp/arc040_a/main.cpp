#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;
    string S;
    int R = 0;
    int B = 0;
    for(int i = 0; i < N; i++) {
        cin >> S;
        for(int j = 0; j < N; j++) {
            if(S[j] == 'R') {
                R += 1;
            }
            if(S[j] == 'B') {
                B += 1;
            }
        }
    }
    if(R == B) {
        cout << "DRAW" << endl;
    } else if(R > B) {
        cout << "TAKAHASHI" << endl;
    } else {
        cout << "AOKI" << endl;
    }
    return 0;
}
