#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    bool is_yes = true;
    for(int i = 0; i < N; i++) {
        if(A[i] != (i+1)) {
            is_yes = false;
        }
    }
    if(is_yes) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
