#include <iostream>
using namespace std;

int main()
{
    string S;
    cin >> S;
    string T;
    cin >> T;

    int i;
    for(i = 0; i < S.size(); i++) {
        int j;
        for(j = 0; j < T.size(); j++) {
            if(S[(i+j)%S.size()] != T[j]) {
                break;
            }
        }
        if(j >= T.size()) {
            break;
        }
    }

    if(i >= S.size()) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }

    return 0;
}
