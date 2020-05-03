#include <iostream>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    int sunuke[N];
    for(int i = 0; i < N; i++) {
        sunuke[i] = 1;
    }
    for(int i = 0; i < K; i++) {
        int d;
        cin >> d;
        for(int j = 0; j < d; j++) {
            int A;
            cin >> A;
            sunuke[A-1] = 0;
        }
    }

    int sum = 0;
    for(int i = 0; i < N; i++) {
        sum += sunuke[i];
    }
    cout << sum << endl;

    return 0;
}
