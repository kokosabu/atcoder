#include <iostream>
using namespace std;

int main()
{
    int N, A, B;
    cin >> N >> A >> B;
    if(N <= 5) {
        cout << N * B << endl;
    } else {
        cout << (N-5)*A + 5*B << endl;
    }
    return 0;
}
