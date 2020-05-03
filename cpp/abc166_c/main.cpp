#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    int H[N];
    for(int i = 0; i < N; i++) {
        cin >> H[i];
    }

    int G[N];
    for(int i = 0; i < N; i++) {
        G[i] = 1;
    }

    int A, B;
    for(int i = 0; i < M; i++) {
        cin >> A >> B;
        if(H[A-1] < H[B-1]) {
            G[A-1] = 0;
        } else if(H[A-1] > H[B-1]) {
            G[B-1] = 0;
        } else if(H[A-1] == H[B-1]) {
            G[A-1] = 0;
            G[B-1] = 0;
        }
    }

    int count = 0;
    for(int i = 0; i < N; i++) {
        count += G[i];
    }

    cout << count << endl;

#if 0
    6 5
    1 2 3 4 5 6
    8 6 9 1 2 1

    1 3 : 0 1 1 1 1 1
    4 2 : 0 1 1 0 1 1
    4 3 : 0 1 1 0 1 1
    4 6 : 0 1 1 0 1 0
    4 6 : 0 1 1 0 1 0
#endif

    return 0;
} 
