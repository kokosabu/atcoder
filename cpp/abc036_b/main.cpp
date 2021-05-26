#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<string> s(N);

    for(int i = 0; i < N; i++) {
        cin >> s[i];
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cout << s[N-1-j][i];
        }
        cout << endl;
    }

    return 0;
}
