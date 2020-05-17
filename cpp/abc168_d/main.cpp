#include <iostream>
#include <vector>
#include <climits>
#include <queue>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<vector<int>> rooms(N);
    //vector<int> dist(N);
    vector<int> route(N);
    vector<bool> seen(N);

    int A, B;
    for(int i = 0; i < M; i++) {
        cin >> A >> B;
        rooms[A-1].push_back(B-1);
        rooms[B-1].push_back(A-1);
    }

    // BFS のためのデータ構造
    vector<int> dist(N, -1); // 全頂点を「未訪問」に初期化
    queue<int> que;

    // 初期条件 (頂点 0 を初期ノードとする)a
    dist[0] = 0;
    que.push(0); // 0 を橙色頂点にする

    // BFS 開始 (キューが空になるまで探索を行う)
    while (!que.empty()) {
        int v = que.front(); // キューから先頭頂点を取り出す
        que.pop();
        // v から辿れる頂点をすべて調べる
        for(int i = 0; i < rooms[v].size(); i++) {
            if (dist[rooms[v][i]] != -1) continue; // すでに発見済みの頂点は探索しない
            dist[rooms[v][i]] = dist[v] + 1;
            route[rooms[v][i]] = v;
            que.push(rooms[v][i]);
        }
    }

    int j;
    for(j = 1; j < N; j++) {
        if(dist[j] == -1) {
            break;
        }
    }
    if(j == N) {
        cout << "Yes" << endl;
        for(int i = 1; i < N; i++) {
            //cout << i << ", " << dist[i] << ", " << route[i]+1 << endl;
            cout << route[i]+1 << endl;
        }
    } else {
        cout << "No" << endl;
    }


#if 0
    for(int i = 0;i < N; i++) {
        cout << "room: " << i << endl;
        for(auto j = 0; j < rooms[i].size(); j++) {
            cout << rooms[i][j] << ", ";
        }
        cout << endl;
    }
#endif

    return 0;
}
