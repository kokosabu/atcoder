#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<long long> A(N);
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }
    vector<long long> B(N);
    for(int i = 0; i < N; i++) {
        cin >> B[i];
    }
    long long inner_product = 0;
    for(int i = 0; i < N; i++) {
        inner_product += A[i] * B[i];
    }

    if(inner_product == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
