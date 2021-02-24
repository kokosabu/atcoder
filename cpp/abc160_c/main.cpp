#include <iostream>
#include <vector>
using namespace std;

int main()
{   
    int K, N;
    cin >> K >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }   
    
    int max = 0;
    int sum = 0;
    for(int i = 0; i < N-1; i++) {
        int diff = A[i+1] - A[i];
        sum += diff;
        if(diff > max) {
            max = diff;
        }
    }
    int diff = K - A[N-1] + A[0];
    sum += diff;
    if(diff > max) {
        max = diff;
    }
    sum -= max;

    cout << sum << endl;
    
    return 0;
}
