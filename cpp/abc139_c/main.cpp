#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> H(N);
    for(int i = 0; i < N; i++) {
        cin >> H[i];
    }

    int max = 0;
    int enable_moving = 0;
    for(int i = 0; i < N-1; i++) {
        if(H[i] >= H[i+1]) {
            enable_moving += 1;
        } else {
            enable_moving = 0;
        }
        if(max < enable_moving) {
            max = enable_moving;
        }
    }

    cout << max << endl;

    return 0;
}
