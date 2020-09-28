#include <iostream>
using namespace std;

int main()
{
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    if(!((B < C) || (D < A))) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
