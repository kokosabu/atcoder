#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    if(N <= 9) {
        cout << N << endl;
    } else if(N < 100) {
        cout << 9 << endl;
    } else if(N < 1000) {
        cout << 9 + (N-100+1) << endl;
    } else if(N < 10000) {
        cout << 9 + 900 << endl;
    } else if(N < 100000) {
        cout << 9 + 900 + (N-10000+1) << endl;
    } else {
        cout << 9 + 900 + 90000 << endl;
    }
    return 0;
}
