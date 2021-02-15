#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    string S;
    cin >> S;

    int x = 0;
    int max = 0;
    for(int i = 0; i < N; i++) {
        if(S[i] == 'I') {
            x += 1;
            if(x > max) {
                max = x;
            }
        } else {
            x -= 1;
        }
    }

    cout << max << endl;
    return 0;
}
