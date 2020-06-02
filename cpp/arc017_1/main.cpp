#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int i;
    for(i = 2; i < N; i++) {
        if((N%i) == 0) {
            break;
        }
    }
    if(i == N) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
