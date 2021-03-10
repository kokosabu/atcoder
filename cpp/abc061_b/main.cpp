#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> road(N);
    for(int i = 0; i < N; i++) {
        road[i] = 0;
    }

    for(int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        road[a-1] += 1;
        road[b-1] += 1;
    }

    for(int i = 0; i < N; i++) {
        cout << road[i] << endl;
    }

    return 0;
}
