#include <iostream>
using namespace std;

int main()
{
    int N;
    string S;
    cin >> N;
    cin >> S;
    for(int i = 0; i < S.size(); i++) {
        cout << (char) ( 'A' + (int(S[i]-'A')+N)%26 );
    }
    cout << endl;
    return 0;
}
