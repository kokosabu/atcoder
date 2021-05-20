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
    int M;
    cin >> M;
    vector<string> t(M);
    for(int i = 0; i < M; i++) {
        cin >> t[i];
    }

    int max = 0;
    for(int i = 0; i < N; i++) {
        int sum = 0;
        for(int j = 0; j < N; j++) {
            if(s[i] == s[j]) {
                sum += 1;
            }
        }
        for(int j = 0; j < M; j++) {
            if(s[i] == t[j]) {
                sum -= 1;
            }
        }
        if(sum > max) {
            max = sum;
        }
    }

    cout << max << endl;

    return 0;
}
