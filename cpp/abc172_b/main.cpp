#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S, T;
    cin >> S >> T;
    int count = 0;
    for(int i = 0; i < S.size(); i++) {
        if(S[i] != T[i]) {
            count += 1;
        }
    }
    cout << count << endl;
    return 0;
}
