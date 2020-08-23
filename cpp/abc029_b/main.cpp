#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    string S;
    for(int i = 0; i < 12; i++) {
        cin >> S;
        for(int j = 0; j < S.size(); j++) {
            if(S[j] == 'r') {
                count += 1;
                break;
            }
        }
    }
    cout << count << endl;
    return 0;
}
