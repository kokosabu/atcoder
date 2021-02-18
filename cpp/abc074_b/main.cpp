#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int K;
    cin >> K;
    int sum = 0;
    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;

        if(x <= abs(K-x)) {
            sum += 2 * x;
        } else {
            sum += 2 * abs(K-x);
        }
    }
    cout << sum << endl;
    return 0;
}
