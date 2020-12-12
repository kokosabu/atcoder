#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> p(N);
    vector<int> p_sort(N);
    for(int i = 0; i < N; i++) {
        cin >> p[i];
        p_sort[i] = p[i];
    }
    sort(p_sort.begin(), p_sort.end());
    int count = 0;
    for(int i = 0; i < N; i++) {
        if(p[i] != p_sort[i]) {
            count += 1;
        }
    }
    if(count == 0 || count == 2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
