#include <iostream>
using namespace std;

int S(int N)
{
    int S = 0;
    while(N != 0) {
        S += N % 10;
        N /= 10;
    }
    return S;
}

int main()
{
    int N;
    cin >> N;
    if((N%S(N)) == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
