#include <iostream>
#include <queue>
#include <vector>

using namespace std;

struct point {
    int x;
    int y;
};

int main()
{
    int H, W;
    cin >> H >> W;

    vector<vector<int> > mass(H+2, vector<int>(W+2, -1));
    int white_count = 0;
    for(int i = 1; i <= H; i++) {
        for(int j = 1; j <= W; j++) {
            char c;
            cin >> c;
            if(c == '.') {
                mass[i][j] = 0;
                white_count += 1;
            } else if(c == '#') {
                mass[i][j] = 1;
            }
        }
    }

    queue<point> q;
    vector<vector<bool> > seen(H+2, vector<bool>(W+2, false));

    point p;
    p.x = 1;
    p.y = 1;
    mass[1][1] = 1;
    seen[1][1] = true;
    q.push(p);

    while(!q.empty()) {
        point p = q.front();
        q.pop();

        int dist = mass[p.y][p.x];

        if(mass[p.y-1][p.x] == 0 && seen[p.y-1][p.x] == false) {
            point p2 = p;
            p2.y -= 1;

            mass[p2.y][p2.x] = dist + 1;
            seen[p2.y][p2.x] = true;
            q.push(p2);
        }
        if(mass[p.y+1][p.x] == 0 && seen[p.y+1][p.x] == false) {
            point p2 = p;
            p2.y += 1;

            mass[p2.y][p2.x] = dist + 1;
            seen[p2.y][p2.x] = true;
            q.push(p2);
        }
        if(mass[p.y][p.x-1] == 0 && seen[p.y][p.x-1] == false) {
            point p2 = p;
            p2.x -= 1;

            mass[p2.y][p2.x] = dist + 1;
            seen[p2.y][p2.x] = true;
            q.push(p2);
        }
        if(mass[p.y][p.x+1] == 0 && seen[p.y][p.x+1] == false) {
            point p2 = p;
            p2.x += 1;

            mass[p2.y][p2.x] = dist + 1;
            seen[p2.y][p2.x] = true;
            q.push(p2);
        }
    }

    if (seen[H][W] == true) {
        cout << white_count-mass[H][W] << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
