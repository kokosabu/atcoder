#include <iostream>
using namespace std;

int main()
{
    int N, X;
    cin >> N >> X;
    int min = 100000 + 1;
    for(int i = 0; i < N; i++) {
        int m;
        cin >> m;
        X -= m;
        if(m < min) {
            min = m;
        }
    }
    cout << N+(X/min) << endl;
    return 0;
}
