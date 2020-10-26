#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int sum = 0;
    for(int n = 0; n < N; n++) {
        int l, r;
        cin >> l >> r;
        sum += r - l + 1;
    }
    cout << sum << endl;
    return 0;
}
