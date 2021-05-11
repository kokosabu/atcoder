#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    long long bin[200] = {};
    for(int i = 0; i < N; i++) {
        int A;
        cin >> A;
        bin[A%200] += 1;
    }
    unsigned long long count = 0;
    for(int i = 0; i < 200; i++) {
        count += (bin[i]*(bin[i]-1))/2;
    }
    cout << count << endl;

    return 0;
}
