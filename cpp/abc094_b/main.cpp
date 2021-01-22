#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N, M, X;
    cin >> N >> M >> X;
    int left = 0;
    int right = 0;
    for(int i = 0; i < M; i++) {
        int A;
        cin >> A;
        if(A > X) {
            right += 1;
        } else {
            left += 1;
        }
    }
    cout << min(left, right) << endl;
    return 0;
}
