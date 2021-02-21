#include <iostream>
using namespace std;

int main()
{
    string S;
    cin >> S;

    bool is_unreadable = true;
    for(int i = 0; i < S.size(); i++) {
        if(i%2 == 1 && !(S[i] >= 'A' && S[i] <= 'Z')) {
            is_unreadable = false;
        } else if(i%2 == 0 && !(S[i] >= 'a' && S[i] <= 'z')) {
            is_unreadable = false;
        }
    }

    if(is_unreadable) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
