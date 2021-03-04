#include <iostream>
#include <set>
using namespace std;

int main()
{
    int N;
    cin >> N;

    bool is_ok = true;

    set<string> words;

    string W;
    cin >> W;
    words.insert(W);
    string pre_W = W;
    for(int i = 1; i < N; i++) {
        cin >> W;
        words.insert(W);
        if(pre_W[pre_W.size()-1] != W[0]) {
            is_ok = false;
        }
        pre_W = W;
    }

    if(words.size() == N && is_ok) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
