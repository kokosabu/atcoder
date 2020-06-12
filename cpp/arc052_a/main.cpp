#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    cin >> S;

    for(int i = 0; i < S.size(); i++) {
        if(S[i] >= '0' && S[i] <= '9') {
            if((i+1) < S.size() && S[i+1] >= '0' && S[i+1] <= '9') {
                cout << S[i] << S[i+1] << endl;
            } else {
                cout << S[i] << endl;
            }
            return 0;
        }
    }

    return 0;
}
