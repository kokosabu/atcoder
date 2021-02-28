#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int min = 1000000000 + 1;
    for(int i = 0; i < N; i++) {
        int A, P, X;
        cin >> A >> P >> X;
        if((X-A) > 0) {
            if(P < min) {
                min = P;
            }
        }
    }

    if(min == (1000000000+1)) {
        cout << -1 << endl;
    } else {
        cout << min << endl;
    }

    return 0;
}
