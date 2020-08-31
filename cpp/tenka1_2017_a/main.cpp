#include <iostream>
using namespace std;

int main()
{
    string S;
    cin >> S;
    int count = 0;
    for(int i = 0; i < S.size(); i++) {
        if(S[i] == '1') {
            count += 1;
        }
    }
    cout << count << endl;
    return 0;
}
