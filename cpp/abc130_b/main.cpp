#include <iostream>
using namespace std;

int main()
{
    int N, X;
    cin >> N >> X;
    int D = 0;
    int i = 0;
    while(i < N+1) {
        if(D > X) {
           break;
        }
        int L;
        cin >> L;
        D = D + L;
        i += 1;
    }
    cout << i << endl;
    return 0;
}
