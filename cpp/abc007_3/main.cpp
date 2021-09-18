#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct point {
    int x;
    int y;
};

int main()
{
    int R, C;
    cin >> R >> C;
    point s;
    cin >> s.y >> s.x;
    point g;
    cin >> g.y >> g.x;

    vector<vector<int> > c(R, vector<int>(C));
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            char tmp;
            cin >> tmp;
            if(tmp == '#') {
                c[i][j] = -2;
            } else {
                c[i][j] = -1;
            }
        }
    }

    queue<point> q;
    s.y -= 1;
    s.x -= 1;
    c[s.y][s.x] = 0;
    q.push(s);

    while(!q.empty()) {
        point p = q.front();
        q.pop();

        if(p.y > 0) {
            point t = p;
            t.y -= 1;

            if(c[t.y][t.x] == -1) {
                c[t.y][t.x] = c[p.y][p.x] + 1;
                q.push(t);
            }
        }

        if(p.y < R-1) {
            point t = p;
            t.y += 1;

            if(c[t.y][t.x] == -1) {
                c[t.y][t.x] = c[p.y][p.x] + 1;
                q.push(t);
            }
        }

        if(p.x > 0) {
            point t = p;
            t.x -= 1;

            if(c[t.y][t.x] == -1) {
                c[t.y][t.x] = c[p.y][p.x] + 1;
                q.push(t);
            }
        }

        if(p.x < C-1) {
            point t = p;
            t.x += 1;

            if(c[t.y][t.x] == -1) {
                c[t.y][t.x] = c[p.y][p.x] + 1;
                q.push(t);
            }
        }
    }

    cout << c[g.y-1][g.x-1] << endl;

    return 0;
}
