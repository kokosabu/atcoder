#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int d[N];
    for(int i = 0; i < N; i++) {
        cin >> d[i];
    }
    int total = 0;
    for(int i = 0; i < N-1; i++) {
        for(int j = i+1; j < N; j++) {
            total += d[i] * d[j];
        }
    }
    cout << total << endl;
    return 0;
}
