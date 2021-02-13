#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<long> a(N);
    vector<long> b(N);
    for(int i = 0; i < N; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < N; i++) {
        cin >> b[i];
    }

    long max_a = 0;
    long max = 0;
    for(int i = 0; i < N; i++) {
        if(a[i] > max_a) {
            max_a = a[i];
        }
        long c = max_a * b[i];
        if(c > max) {
            max = c;
        }
        cout << max << endl;
    }
    return 0;
}
