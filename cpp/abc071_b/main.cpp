#include <iostream>
using namespace std;

int main()
{
    string S;
    cin >> S;

    int indexes[26] = {};

    for(int i = 0; i < S.size(); i++) {
        indexes[S[i]-'a'] = 1;
    }

    for(int i = 0; i < 26; i++) {
        if(indexes[i] == 0) {
            cout << (char)('a'+i) << endl;
            return 0;
        }
    }

    cout << "None" << endl;

    return 0;
}
