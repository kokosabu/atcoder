#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct point {
    int x;
    int y;
};

int walk(vector<vector<char> >& m, point start, point goal)
{
    queue<point> q;
    q.push(start);

    vector<vector<int> > c(m.size(), vector<int>(m[0].size(), -1));
    c[start.y][start.x] = 0;
    while(!q.empty()) {
        point p = q.front();
        q.pop();

        int dist = c[p.y][p.x];

        if(p.y > 0) {
            if(m[p.y-1][p.x] != 'X' && c[p.y-1][p.x] == -1) {
                point next = p;
                next.y -= 1;
                c[next.y][next.x] = dist + 1;
                q.push(next);
            }
        }
        if(p.x > 0) {
            if(m[p.y][p.x-1] != 'X' && c[p.y][p.x-1] == -1) {
                point next = p;
                next.x -= 1;
                c[next.y][next.x] = dist + 1;
                q.push(next);
            }
        }
        if(p.y < m.size()-1) {
            if(m[p.y+1][p.x] != 'X' && c[p.y+1][p.x] == -1) {
                point next = p;
                next.y += 1;
                c[next.y][next.x] = dist + 1;
                q.push(next);
            }
        }
        if(p.x < m[0].size()-1) {
            if(m[p.y][p.x+1] != 'X' && c[p.y][p.x+1] == -1) {
                point next = p;
                next.x += 1;
                c[next.y][next.x] = dist + 1;
                q.push(next);
            }
        }
    }

    return c[goal.y][goal.x];
}

int main()
{
    int H, W, N;
    cin >> H >> W >> N;
    vector<vector<char> > m(H, vector<char>(W));
    vector<point> points(N+1);
    for(int i = 0; i < H; i++) {
        for(int j = 0; j < W; j++) {
            cin >> m[i][j];

            if(m[i][j] == 'S') {
                points[0].y = i;
                points[0].x = j;
            }
            if(m[i][j] >= '1' && m[i][j] <= '9') {
                points[m[i][j]-'0'].y = i;
                points[m[i][j]-'0'].x = j;
            }
        }
    }

    int total = 0;
    for(int i = 0; i < N; i++) {
        point start = points[i];
        point goal  = points[i+1];
        total += walk(m, start, goal);
    }

    cout << total << endl;
    return 0;
}
