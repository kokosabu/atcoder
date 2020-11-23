#include <iostream>
using namespace std;

int main()
{
    int N, X;
    cin >> N >> X;
    string S;
    cin >> S;
    for(int i = 0; i < S.size(); i++) {
        if(S[i] == 'o') {
            X += 1;
        } else if(X > 0) {
            X -= 1;
        }
    }
    cout << X << endl;
    return 0;
}
