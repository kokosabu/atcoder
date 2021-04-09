#include <iostream>
using namespace std;

int main()
{
    int K;
    cin >> K;

    int count = 0;
    for(int A = 1; A <= 200000; A++) {
        for(int B = 1; B <= 200000; B++) {
            for(int C = 1; C <= 200000; C++) {
                if(A*B*C > K) {
                    break;
                }
                count += 1;
            }
            if(A*B > K) {
                break;
            }
        }
        if(A > K) {
            break;
        }
    }

    cout << count << endl;

    return 0;
}
