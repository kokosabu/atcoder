#include <iostream>
using namespace std;

int main()
{
    int A, B, K;
    cin >> A >> B >> K;

    for(int i = 0; i < K &&  (A+i) <= B; i++) {
        cout << A+i << endl;
    }
    int start = B - K + 1;
    if(start <= (A+K-1)) {
        start = A + K;
    }
    for(int i = start; i <= B; i++) {
        cout << i << endl;
    }

    return 0;
}
