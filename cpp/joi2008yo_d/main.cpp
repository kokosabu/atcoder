#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main()
{
    int m, n;
    int i, j;
    cin >> m;
    vector<pair<int, int>> sign(m);
    for(int i = 0; i < m; i++) {
        cin >> sign[i].first >> sign[i].second;
    }
    cin >> n;
    vector<pair<int, int>> coordinate(n);
    for(int i = 0; i < n; i++) {
        cin >> coordinate[i].first >> coordinate[i].second;
    }

    sort(sign.begin(), sign.end());
    sort(coordinate.begin(), coordinate.end());

    for(i = 0; i < n-m; i++) {
        //cout << "---- i: " << i << " ----" << endl;
        pair<int, int> diff;
        diff.first = coordinate[i].first-sign[0].first;
        diff.second = coordinate[i].second-sign[0].second;
        //cout << diff.first << " " << diff.second << endl;
        int d = 1;
        for(j = i+1; j < n; j++) {
            if((sign[d].first+diff.first) == coordinate[j].first &&
               (sign[d].second+diff.second) == coordinate[j].second) {
                d += 1;
            }
        }
        if(d == m) {
            cout << diff.first << " " << diff.second << endl;
            break;
        }
    }
    return 0;
}
