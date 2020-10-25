#include <iostream>
using namespace std;

int main()
{
    string S;
    cin >> S;
    int l = 0;
    int r = S.size() - 1;
    int count = 0;
    while(l <= r) {
        if(S[l] != S[r]) {
            count += 1;
        }
        l++;
        r--;
    }
    cout << count << endl;
    return 0;
}
