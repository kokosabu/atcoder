#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N, D;

    cin >> N >> D;
    int count = 0;

    double X, Y;
    for(int i = 0; i < N; i++) {
        cin >> X >> Y;
        if(sqrt(pow(X, 2) + pow(Y, 2)) <= D) {
            count += 1;
        }
    }

    cout << count << endl;

    return 0;
}
