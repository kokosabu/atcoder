#include <iostream>
using namespace std;

int main()
{
    unsigned long long N;
    cin >> N;
    unsigned long long pre = N * 100 / 108;
    if((pre * 108 / 100) == N) {
        cout << pre << endl;
    } else if(((pre+1) * 108 / 100) == N) {
        cout << pre+1 << endl;
    } else {
        cout << ":(" << endl;
    }
    return 0;
}
