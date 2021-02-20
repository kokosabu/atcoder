#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int left = -1;
    int right = -1;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'A' && left == -1) {
            left = i;
        }
        if(s[i] == 'Z') {
            right = i;
        }
    }

    cout << right-left+1 << endl;
    return 0;
}
