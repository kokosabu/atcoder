#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    bool is_kai = true;
    for(int i = 0; i < s.size()/2; i++) {
        if(!(s[i] == '*' || s[s.size()-1-i] == '*' || s[i] == s[s.size()-1-i])) {
            is_kai = false;
        }
    }

    if(is_kai) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
