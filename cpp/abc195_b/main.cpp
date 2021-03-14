#include <iostream>
using namespace std;

int main()
{
    int A, B, W;
    cin >> A >> B >> W;

    int min;
    if((W*1000)%B == 0) {
        min = (W*1000) / B;
    } else {
        min = (W*1000) / B + 1;
    }

    int max = (W*1000) / A;

    if(min <= max) {
        cout << min << " " << max << endl;
    } else {
        cout << "UNSATISFIABLE" << endl;
    }

    return 0;
}
