#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int odd_count = 0;
    for(int i = 0; i < N; i++) {
        int A;
        cin >> A;
        if((A%2) == 1) {
            odd_count += 1;
        }
    }
    if((odd_count%2) == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
