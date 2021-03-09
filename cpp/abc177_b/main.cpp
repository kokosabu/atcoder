#include <iostream>
using namespace std;

int main()
{
    string S;
    cin >> S;
    string T;
    cin >> T;

    int best_match = 0;
    for(int i = 0; i <= S.size()-T.size(); i++) {
        int match = 0;
        for(int j = 0; j < T.size(); j++) {
            if(S[i+j] == T[j]) {
                match += 1;
            }
        }
        if(match > best_match) {
            best_match = match;
        }
    }

    cout << T.size()-best_match << endl;
    return 0;
}
