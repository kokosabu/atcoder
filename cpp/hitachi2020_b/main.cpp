#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int A, B, M;
    cin >> A >> B >> M;
    vector<int> a(A);
    for(int i = 0; i < A; i++) {
        cin >> a[i];
    }
    int minimum = *min_element(a.begin(), a.end());
    vector<int> b(B);
    for(int i = 0; i < B; i++) {
        cin >> b[i];
    }
    minimum += *min_element(b.begin(), b.end());
    for(int i = 0; i < M; i++) {
        int x, y, c;
        cin >> x >> y >> c;
        if((a[x-1]+b[y-1]-c) < minimum) {
            minimum = a[x-1] + b[y-1] - c;
        }
    }
    cout << minimum << endl;
    return 0;
}
