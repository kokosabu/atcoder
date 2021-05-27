#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    unsigned long long power = 1;
    for(int i = 1; i <= N; i++) {
        power *= i;

        if(power > 100000000) {
            power %= 1000000007;
        }
    }
    power %= 1000000007;
    cout << power << endl;

    return 0;
}
