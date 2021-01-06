#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    int max = 2 - 1;
    for(int i = 0; i < N; i++) {
        cin >> A[i];
        if(A[i] > max) {
            max = A[i];
        }
    }
    int max_gcd;
    int max_gcd_count = 0;

    for(int k = 2; k <= max; k++) {
        int gcd_count = 0;
        for(int i = 0; i < N; i++) {
            if((A[i]%k) == 0) {
                gcd_count += 1;
            }
        }
        if(gcd_count >= max_gcd_count) {
            max_gcd = k;
            max_gcd_count = gcd_count;
        }
    }

    cout << max_gcd << endl;

    return 0;
}
