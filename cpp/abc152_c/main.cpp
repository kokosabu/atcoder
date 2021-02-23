#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int count = 0;
    int min = N + 1;
    for(int i = 0; i < N; i++) {
        int P;
        cin >> P;
        if(P <= min) {
            count += 1;
        }
        if(P < min) {
            min = P;
        }
    }

    cout << count << endl;

    return 0;
}
