#include <iostream>
using namespace std;

int main()
{
    string S;
    cin >> S;
    if(S[S.size()-1] != 's') {
        cout << S << "s" << endl;
    } else {
        cout << S << "es" << endl;
    }
    return 0;
}
