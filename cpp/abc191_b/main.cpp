#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, X;
    cin >> N >> X;
    vector<int> A_dash;
    for(int i = 0; i < N; i++) {
        int A;
        cin >> A;
        if(A != X) {
            A_dash.push_back(A);
        }
    }
    if(A_dash.size() != 0) {
        for(int i = 0; i < A_dash.size()-1; i++) {
            cout << A_dash[i] << " ";
        }
        cout << A_dash[A_dash.size()-1] << endl;
    } else {
        cout << endl;
    }
    return 0;
}
