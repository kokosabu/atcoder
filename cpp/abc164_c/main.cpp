#include <iostream>
#include <set>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int N;
    string S;
    set<string> get_items;

    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> S;
        get_items.insert(S);
    }

    cout << get_items.size() << endl;
    
    return 0;
}
