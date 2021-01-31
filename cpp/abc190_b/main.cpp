#include <iostream>
using namespace std;

int main()
{
    int N, S, D;
    cin >> N >> S >> D;
    bool is_yes = false;
    for(int i = 0; i < N; i++) {
        int X, Y;
        cin >> X >> Y;
        if(X < S && Y > D) {
            is_yes = true;
        }
    }
    if(is_yes) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
