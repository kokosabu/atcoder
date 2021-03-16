#include <iostream>
using namespace std;

int main()
{
    char X;
    cin >> X;
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == X) {
            continue;
        }
        cout << s[i];
    }

    cout << endl;

    return 0;
}
