#include <iostream>
using namespace std;

int main()
{
    int N;
    string s;
    cin >> N;
    cin >> s;
    int count = 0;
    for(int i = 0; i < N; i++) {
        if(s[i] == 'R') {
            count += 1;
        } else {
            count -= 1;
        }
    }
    if(count > 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
