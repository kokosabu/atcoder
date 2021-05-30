#include <iostream>
#include <vector>
using namespace std;

vector<unsigned long long> counts;

void dfs(vector<vector<int> > &G, int p, int prev, int x)
{
    counts[p] += x;

    for (auto i: G[p]) {
        if(i != prev) {
            dfs(G, i, p, counts[p]);
        }
    }
}

int main()
{
    int N, Q;
    cin >> N >> Q;

    vector<vector<int> > G(N);
    counts.assign(N, 0);
    for(int i = 0; i < N-1; i++) {
        int a, b;
        cin >> a >> b;
        G[a-1].push_back(b-1);
        G[b-1].push_back(a-1);
    }

    for(int i = 0; i < Q; i++) {
        int p, x;
        cin >> p >> x;
        counts[p-1] += x;
    }
    dfs(G, 0, -1, 0);

    for(int i = 0; i < N-1; i++) {
        cout << counts[i] << " ";
    }
    cout << counts[N-1] << endl;

    return 0;
}
