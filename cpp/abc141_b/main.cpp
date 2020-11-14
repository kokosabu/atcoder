#include <iostream>
using namespace std;

int main()
{
    string S;
    cin >> S;
    bool is_easy = true;
    for(int i = 0; i < S.size(); i++) {
        if(i%2 == 0) {
            if(S[i] == 'L') {
                is_easy = false;
            }
        } else {
            if(S[i] == 'R') {
                is_easy = false;
            }
        }
    }
    if(is_easy) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
