#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> B(N);
    vector<int> C(N);
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for(int i = 0; i < N; i++) {
        cin >> B[i];
    }
    for(int i = 0; i < N; i++) {
        cin >> C[i];
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    sort(C.begin(), C.end());

    long long sum = 0;
    for(int j = 0; j < N; j++) {
        auto iter_lower = lower_bound(A.begin(), A.end(), B[j]);
        auto iter_upper = upper_bound(A.begin(), A.end(), B[j]);
        long idx_lower = distance(A.begin(), iter_lower);
        long idx_upper = distance(A.begin(), iter_upper);
        //cout << "key 未満の要素数は " << idx_lower << "\n";
        //cout << "key より大きい数の要素数は " << N - idx_upper << "\n";

        auto itera = lower_bound(A.begin(), A.end(), B[j]);
        auto iterc = upper_bound(C.begin(), C.end(), B[j]);
        //auto iterc = lower_bound(C.begin(), C.end(), B[j]);

        //A < B < C

        //cout << "B:" << B[j] << endl;
        //cout << "A:" << *itera << "->" << (itera-A.begin()) << endl;
        //cout << "C: " << *iterc << "->" << (C.end()-iterc) << endl;
        //cout << (itera - A.begin()) * (C.end() - iterc) << endl;
        //sum += (itera - A.begin()) * (C.end() - iterc);
        sum += distance(A.begin(), itera) * (N - distance(C.begin(), iterc));
    }
    cout << sum << endl;
    return 0;
}
