#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> B(N-1);
    for(int i = 0; i < N-1; i++) {
        cin >> B[i];
    }

    int sum = 0;
    sum += B[0];
    for(int i = 1; i < N-1; i++) {
        if(B[i-1] <= B[i]) {
            sum += B[i-1];
        } else {
            sum += B[i];
        }
    }
    sum += B[N-2];

    cout << sum << endl;

    return 0;
}
