#include <iostream>
#include <vector>

using namespace std;

void trace(vector<vector<int> > land, int i, int j, int current, int* dist)
{
    if(land[i][j] == 0) {
        return;
    }

    land[i][j] = 0;
    current += 1;
    if(current > *dist) {
        *dist = current;
    }

    if(i > 0) {
        trace(land, i-1, j, current, dist);
    }
    if(j > 0) {
        trace(land, i, j-1, current, dist);
    }
    if(i < land.size()-1) {
        trace(land, i+1, j, current, dist);
    }
    if(j < land[i].size()-1) {
        trace(land, i, j+1, current, dist);
    }

    land[i][j] = 1;
}

int main()
{
    int m;
    cin >> m;

    int n;
    cin >> n;

    vector<vector<int> > land(n, vector<int>(m));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> land[i][j];
        }
    }

    int max_dist = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(land[i][j] == 1) {
                int dist = 0;
                trace(land, i, j, 0, &dist);
                max_dist = max(max_dist, dist);
            }
        }
    }

    cout << max_dist << endl;
}
