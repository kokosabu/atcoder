#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct point {
    int x;
    int y;
};

void walk(vector<vector<int> >& map, vector<vector<int> >& seen, queue<point> q)
{
    while(!q.empty()) {
        point p = q.front();
        q.pop();

        seen[p.y][p.x] = 1;
        if(map[p.y][p.x] == 0) {
            map[p.y][p.x] = 2;
        } else {
            continue;
        }
    
        point p2;

        // 左(西)
        p2 = p;
        p2.x -= 1;
        if(seen[p2.y][p2.x] == 0) {
            q.push(p2);
        }
    
        // 右(東)
        p2 = p;
        p2.x += 1;
        if(seen[p2.y][p2.x] == 0) {
            q.push(p2);
        }

        // 左上(北西)
        p2 = p;
        if((p.y%2) == 0) {
            p2.y -= 1;
            p2.x -= 1;
        } else {
            p2.y -= 1;
        }
        if(seen[p2.y][p2.x] == 0) {
            q.push(p2);
        }

        // 左下(南西)
        p2 = p;
        if((p.y%2) == 0) {
            p2.y += 1;
            p2.x -= 1;
        } else {
            p2.y += 1;
        }
        if(seen[p2.y][p2.x] == 0) {
            q.push(p2);
        }

        // 右上(北東)
        p2 = p;
        if((p.y%2) == 0) {
            p2.y -= 1;
        } else {
            p2.y -= 1;
            p2.x += 1;
        }
        if(seen[p2.y][p2.x] == 0) {
            q.push(p2);
        }

        // 右下(南東)
        p2 = p;
        if((p.y%2) == 0) {
            p2.y += 1;
        } else {
            p2.y += 1;
            p2.x += 1;
        }
        if(seen[p2.y][p2.x] == 0) {
            q.push(p2);
        }
    }
}

int main()
{
    int W, H;
    cin >> W >> H;
    vector<vector<int> > map(H+2, vector<int>(W+2, -1));
    queue<point> build;
    for(int i = 1; i <= H; i++) {
        for(int j = 1; j <= W; j++) {
            cin >> map[i][j];
            if(map[i][j] == 1) {
                point p;
                p.y = i;
                p.x = j;
                build.push(p);
            }
        }
    }

    vector<vector<int> > seen(H+2, vector<int>(W+2, 0));
    queue<point> q;
    for(int i = 1; i <= H; i++) {
        if(seen[i][1] == 0) {
            point p;
            p.y = i;
            p.x = 1;
            q.push(p);

            walk(map, seen, q);
        }
        if(seen[i][W] == 0) {
            point p;
            p.y = i;
            p.x = W;
            q.push(p);

            walk(map, seen, q);
        }
    }
    for(int i = 2; i < W; i++) {
        if(seen[1][i] == 0) {
            point p;
            p.y = 1;
            p.x = i;
            q.push(p);

            walk(map, seen, q);
        }
        if(seen[H][i] == 0) {
            point p;
            p.y = H;
            p.x = i;
            q.push(p);

            walk(map, seen, q);
        }
    }

    int count = 0;
    while(!build.empty()) {
        point p = build.front();
        build.pop();

        int i = p.y;
        int j = p.x;

        if(map[i][j-1] == -1 || map[i][j-1] == 2) {
            count += 1;
        }
        if(map[i][j+1] == -1 || map[i][j+1] == 2) {
            count += 1;
        }
        if((i%2) == 0) {
            if(map[i-1][j-1] == -1 || map[i-1][j-1] == 2) {
                count += 1;
            }
            if(map[i+1][j-1] == -1 || map[i+1][j-1] == 2) {
                count += 1;
            }
            if(map[i-1][j] == -1 || map[i-1][j] == 2) {
                count += 1;
            }
            if(map[i+1][j] == -1 || map[i+1][j] == 2) {
                count += 1;
            }
        } else {
            if(map[i-1][j] == -1 || map[i-1][j] == 2) {
                count += 1;
            }
            if(map[i+1][j] == -1 || map[i+1][j] == 2) {
                count += 1;
            }
            if(map[i-1][j+1] == -1 || map[i-1][j+1] == 2) {
                count += 1;
            }
            if(map[i+1][j+1] == -1 || map[i+1][j+1] == 2) {
                count += 1;
            }
        }
    }

    cout << count << endl;

    return 0;
}
