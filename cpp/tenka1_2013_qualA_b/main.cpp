#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int count = 0;
    for(int i = 0; i < N; i++) {
        int V, W, X, Y, Z;
        cin >> V >> W >> X >> Y >> Z;
        int S = V + W + X + Y + Z;
        if(S >= 0 && S < 20) {
            count += 1;
        }
    }
    cout << count << endl;
    return 0;
}
