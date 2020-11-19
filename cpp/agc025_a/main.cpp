#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int sum = 0;
    do {
        sum += (N%10);
        N /= 10;
    } while(N != 0);

    if(sum == 1) {
        cout << 10 << endl;
    } else {
        cout << sum << endl;
    }

    return 0;
}
