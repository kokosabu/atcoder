#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> list;

    while(1) {
        string s;
        cin >> s;
        if(cin.eof()) {
            break;
        }
        list.push_back(s);
    }

    sort(list.begin(), list.end());

    cout << list[6] << endl;

    return 0;
}
