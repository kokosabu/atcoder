#include <iostream>
using namespace std;

int main()
{
    int N, T;
    cin >> N >> T;
    int min_c = 1000+1;
    for(int i = 0; i < N; i++) {
        int c, t;
        cin >> c >> t;
        if(t <= T && c < min_c) {
            min_c = c;
        }
    }

    if(min_c == 1000+1) {
        cout << "TLE" << endl;
    } else {
        cout << min_c << endl;
    }

    return 0;
}
