#include <iostream>
using namespace std;

int main()
{
    int N, A, B;
    cin >> N >> A >> B;
    int pos = 0;
    for(int n = 0; n < N; n++) {
        string s;
        int d;
        cin >> s >> d;
        if(s == "East") {
            if(d < A) {
                pos += A;
            } else if(d > B) {
                pos += B;
            } else {
                pos += d;
            }
        } else {
            if(d < A) {
                pos -= A;
            } else if(d > B) {
                pos -= B;
            } else {
                pos -= d;
            }
        }
    }

    if(pos < 0) {
        cout << "West " << -pos << endl;
    } else if(pos > 0) {
        cout << "East " << pos << endl;
    } else {
        cout << pos << endl;
    }

    return 0;
}
