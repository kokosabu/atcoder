#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    int N;
    cin >> N;
    map<string, int> m;
    for(int i = 0; i < N; i++) {
        string S;
        cin >> S;
        if(m.count(S) == 0) {
            m[S] = 1;
        } else {
            m[S] += 1;
        }
    }
    int max = 0;
    for(auto itr = m.begin(); itr != m.end(); itr++) {
        if(max < itr->second) {
            max = itr->second;
        }
    }
    vector<string> l;
    for(auto itr = m.begin(); itr != m.end(); itr++) {
        if(itr->second == max) {
            l.push_back(itr->first);
        }
    }

    sort(l.begin(), l.end());
    for(auto itr = l.begin(); itr != l.end(); itr++) {
        cout << *itr << endl;
    }

    return 0;
}
