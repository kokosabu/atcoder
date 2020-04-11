#include <iostream>

using namespace std;

int main()
{
    int K;
    int X;

    cin >> K >> X;

    if((500*K) >= X) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}
