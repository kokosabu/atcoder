#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;

    unordered_map<int, int> table;
    unordered_map<int, unordered_map<int, int> > answers;
    for(int i = 0; i < N; i++) {
        int a;
        cin >> a;

        table[a] += 1;
        answers[a][table[a]] = i+1;
    }

    for(int i = 0; i < Q; i++) {
        int x, k;
        cin >> x >> k;

        if(answers[x][k] == 0) {
            cout << -1 << endl;
        } else {
            cout << answers[x][k] << endl;
        }
    }

    return 0;
}
