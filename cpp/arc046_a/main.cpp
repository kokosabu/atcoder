#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int n = N % 9;
    if(n == 0) {
        n = 9;
    }
    int loop = (N / 9) + 1;
    if(N%9 == 0) {
        loop -= 1;
    }
    for(int i = 0; i < loop; i++) {
        cout << n;
    }
    cout << endl;

    return 0;
}
