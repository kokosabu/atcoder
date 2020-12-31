#include <iostream>
using namespace std;

int main()
{
    string S;
    cin >> S;
    bool is_different = true;
    for(int i = 0; i < S.size()-1; i++) {
        for(int j = i+1; j < S.size(); j++) {
            if(S[i] == S[j]) {
                is_different = false;
                break;
            }
        }
    }
    if(is_different) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    return 0;
}
