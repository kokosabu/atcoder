#include <iostream>
using namespace std;

int main()
{
    int N, A;
    int buka[2*100000+1];
    int i;
    cin >> N;
    for(i = 1; i <= N; i++) {
        buka[i] = 0;
    }
    for(i = 0; i < N-1; i++) {
        cin >> A;
        buka[A] += 1;
    }
    for(i = 1; i <= N; i++) {
        cout << buka[i] << endl;
    }

    return 0;
}
