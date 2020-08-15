#include <iostream>
using namespace std;

int main()
{
    string S;
    cin >> S;
    int max = 0;
    int count = 0;
    int before = 0;
    for(int i = 0; i < 3; i++) {
        if(S[i] == 'R') {
            if(before == 1) {
                count += 1;
            } else {
                count = 1;
            }
            before = 1;
            if(max < count) {
                max = count;
            }
        } else if(S[i] == 'S') {
            before = 0;
        }
    }
    cout << max << endl;
    return 0;
}
