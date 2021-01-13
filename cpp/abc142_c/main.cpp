#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> o(N);
    for(int i = 0; i < N; i++) {
        int A;
        cin >> A;
        o[A-1] = i+1;
    }
    for(int i = 0; i < N-1; i++) {
        cout << o[i] << " ";
    }
    cout << o[N-1] << endl;
    return 0;
}
