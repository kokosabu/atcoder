#include <iostream>
using namespace std;

int main()
{
    unsigned long long N, X;
    cin >> N >> X;
    X *= 100;

    unsigned long long total = 0;
    int answer = -1;

    for(int i = 0; i < N; i++) {
        unsigned long long V, P;
        cin >> V >> P;
        total += V * P;

        if(total > X) {
            answer = i+1;
            break;
        }
    }

    cout << answer << endl;

    return 0;
}
