#include <iostream>
using namespace std;

int main()
{
    int V, T, S, D;
    cin >> V >> T >> S >> D;

    if((V*S) >= D && (V*T) <= D) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }

    return 0;
}
