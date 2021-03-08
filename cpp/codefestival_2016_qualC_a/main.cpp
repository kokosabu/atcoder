#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    bool is_CF = false;

    int index = 0;
    while(index < s.size()) {
        if(s[index] == 'C') {
            index += 1;
            break;
        }
        index += 1;
    }
    while(index < s.size()) {
        if(s[index] == 'F') {
            is_CF = true;
            break;
        }
        index += 1;
    }

    if(is_CF) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
