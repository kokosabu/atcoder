#include <iostream>
using namespace std;

int main()
{
    string w;
    cin >> w;
    int tables[26] = {};
    for(int i = 0; i < w.size(); i++) {
        tables[w[i]-'a'] += 1;
    }
    bool is_correct = true;
    for(int i = 0; i < 26; i++) {
        if(tables[i]%2 != 0) {
            is_correct = false;
        }
    }
    if(is_correct) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
