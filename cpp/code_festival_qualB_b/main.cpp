#include <iostream>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    int count = 0;
    int day = -1;
    for(int i = 0; i < N; i++) {
        int a;
        cin >> a;
        count += a;
        if(count >= K && day == -1) {
            day = i+1;
        }
    }
    cout << day << endl;
    return 0;
}
