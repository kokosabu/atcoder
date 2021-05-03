#include <iostream>
using namespace std;

int main()
{
    int L, R;
    cin >> L >> R;
    int size[31] = {};
    for(int i = 0; i < L; i++) {
        int l;
        cin >> l;
        size[l-10] += 1;
    }
    int count = 0;
    for(int i = 0; i < R; i++) {
        int r;
        cin >> r;
        if(size[r-10] > 0) {
            count += 1;
            size[r-10] -= 1;
        }
    }

    cout << count << endl;

    return 0;
}
