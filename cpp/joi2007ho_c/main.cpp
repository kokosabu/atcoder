#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef pair<int, int> P;

bool posts[7001][7001];
int main()
{
    int n;
    int i, j;
    int m;

    for(i = 0; i < 7001; i++) {
        for(j = 0; j < 7001; j++) {
            posts[i][j] = false;
        }
    }

    cin >> n;
    vector<P> p(n);

    for(i = 0; i < n; i++) {
        cin >> p[i].first >> p[i].second;
        posts[p[i].first][p[i].second] = true;
    }

    m = 0;
    for(i = 0; i < n-1; i++) {
        for(j = i+1; j < n; j++) {
            pair<int, int> c;
            pair<int, int> d;
            c.first  = p[i].first  - (p[j].second - p[i].second);
            c.second = p[i].second + (p[j].first  - p[i].first);
            d.first  = p[j].first  - (p[j].second - p[i].second);
            d.second = p[j].second + (p[j].first  - p[i].first);
            if(c.first < 0 || c.first >= 5001) {
                continue;
            }
            if(c.second < 0 || c.second >= 5001) {
                continue;
            }
            if(d.first < 0 || d.first >= 5001) {
                continue;
            }
            if(d.second < 0 || d.second >= 5001) {
                continue;
            }
            if(posts[c.first][c.second] == true && posts[d.first][d.second] == true) {
                int sq = (p[i].first-p[j].first)*(p[i].first-p[j].first) + (p[i].second-p[j].second)*(p[i].second-p[j].second);
                if(sq > m) {
                    m = sq;
                }
            }
        }
    }
    cout << m << endl;

    return 0;
}
