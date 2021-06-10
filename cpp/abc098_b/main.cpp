#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    string S;
    cin >> S;

    int X[26];
    int Y[26];
    int max = 0;

    for(int i = 1; i < N-1; i++) {
        for(int j = 0; j < 26; j++) {
            X[j] = 0;
            Y[j] = 0;
        }
        for(int j = 0; j < i; j++) {
            X[S[j]-'a'] += 1;
        }
        for(int j = i; j < N; j++) {
            Y[S[j]-'a'] += 1;
        }
        int count = 0;
        for(int j = 0; j < 26; j++) {
            if(X[j] > 0 && Y[j] > 0) {
                count += 1;
            }
        }
        if(count > max) {
            max = count;
        }
    }

    cout << max << endl;

    return 0;
}
