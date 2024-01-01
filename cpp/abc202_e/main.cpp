#include <iostream>
#include <vector>
#include <deque>
using namespace std;

void search(vector<vector<int> >& table, vector<vector<int> >& tree, deque<int>& route, int node)
{
    cout << "in - " << node << endl;

    if(tree[node].size() == 0) { // 頂点
        cout << "top" << endl;
        // for(int i = 0; i < tree[node].size(); i++) {
        //     cout << route[i] << endl;
        // }
        route.pop_front();
        return;
    }

    route.push_back(node);
    cout << "size : " << tree[node].size() << endl;
    for(int i = 0; i < tree[node].size(); i++) {
        cout << "--- " << node << " --- " << i << endl;
        search(table, tree, route, tree[node][i]);
        cout << "*** " << node << " *** " << i << endl;
    }

    cout << "out - " << node << endl;
}

int main()
{
    int N;
    cin >> N;

    vector<vector<int> > tree(N);
    for(int i = 1; i < N; i++) {
        int P;
        cin >> P;
        tree[P-1].push_back(i);
    }

    int Q;
    cin >> Q;

    vector<int> U(Q);
    vector<int> D(Q);
    int max_d = 0;
    for(int i = 0; i < Q; i++) {
        cin >> U[i] >> D[i];
        if(D[i] > max_d) {
            max_d = D[i];
        }
    }

    vector<vector<int> > table(N, vector<int>(max_d));
    for(int i = 0; i < N; i++)  {
        for(int j = 0; j < max_d; j++) {
            table[i][j] = 0;
        }
    }

    deque<int> route;
    search(table, tree, route, 0);
    cout << "OUT" << endl;

    //for(int i = 0; i < Q; i++) {
    //    cout << table[U[i]][D[i]] << endl;
    //}

    return 0;
}
