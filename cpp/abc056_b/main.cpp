#include <iostream>
using namespace std;

int main()
{
    int W, a, b;
    cin >> W >> a >> b;

    int min_end;
    int max_start;
    if(a < b) {
        min_end = a + W;
        max_start = b;
    } else {
        min_end = b + W;
        max_start = a;
    }

    if(max_start - min_end > 0) {
        cout << max_start - min_end << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}
