#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    cin >> S;
    S[S.size()-1] = '5';
    cout << S << endl;
    return 0;
}
