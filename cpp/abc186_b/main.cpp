#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int H, W;
    cin >> H >> W;
    vector<vector<int>> A(H, vector<int>(W));
    for(int i = 0; i < H; i++) {
        for(int j = 0; j < W; j++) {
            cin >> A[i][j];
        }
    }
    int m = *min_element(A[0].begin(), A[0].end());
    for(int i = 1; i < H; i++) {
        m = min(m, *min_element(A[i].begin(), A[i].end()));
    }
    int count = 0;
    for(int i = 0; i < H; i++) {
        for(int j = 0; j < W; j++) {
            count += A[i][j] - m;
        }
    }
    cout << count << endl;
    return 0;
}
