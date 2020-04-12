#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int i;
    long long sum = 0;
    for(i = 1; i <= N; i++) {
        if(i%3 != 0 && i%5 != 0) {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}
