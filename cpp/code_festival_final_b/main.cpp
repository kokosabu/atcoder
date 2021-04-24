#include <iostream>
using namespace std;

int main()
{
    string S;
    cin >> S;
    int sum = 0;
    for(int i = 0; i < S.size(); i++) {
        int d = S[i] - '0';
        if((i%2) == 0) {
            sum += d;
        } else {
            sum -= d;
        }
    }
    cout << sum << endl;
    return 0;
}
