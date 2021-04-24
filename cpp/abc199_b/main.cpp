#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int A_max = 0;
    for(int i = 0; i < N; i++) {
        int A;
        cin >> A;
        if(A > A_max) {
            A_max = A;
        }
    }
    int B_min = 1000 + 1;
    for(int i = 0; i < N; i++) {
        int B;
        cin >> B;
        if(B < B_min) {
            B_min = B;
        }
    }
    if(A_max <= B_min) {
        cout << (B_min - A_max + 1) << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}
