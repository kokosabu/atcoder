#include <iostream>
#include <set>
using namespace std;

int main()
{
    int N;
    cin >> N;
    set<int> kagami;
    for(int i = 0; i < N; i++) {
        int d;
        cin >> d;
        kagami.insert(d);
    }
    cout << kagami.size() << endl;
    return 0;
}
