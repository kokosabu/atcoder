#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int X, N;
    cin >> X >> N;
    vector<int> p(N);
    for(int i = 0; i < N; i++) {
        cin >> p[i];
    }

    int out;
    int diff = 0;
    while(1) {
        int left = X - diff;
        if(find(p.begin(), p.end(), left) == p.end()) {
            out = left;
            break;
        }
        int right = X + diff;
        if(find(p.begin(), p.end(), right) == p.end()) {
            out = right;
            break;
        }
        diff += 1;
    }
    cout << out << endl;
    return 0;
}
