#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    unsigned long long sum = 0;
    for(int n = 0; n < N; n++) {
        unsigned long long A, B;
        cin >> A >> B;
        sum += (A + B) * (B-A+1) / 2;
    }
    cout << sum << endl;
    return 0;
}
