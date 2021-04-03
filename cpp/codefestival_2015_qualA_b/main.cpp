#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    unsigned long long S = 0;
    for(int i = 0; i < N; i++) {
        int A;
        cin >> A;
        S = 2*S + A;
    }

    cout << S << endl;

    return 0;
}
