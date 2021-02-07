#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    string S;
    cin >> S;

    int min = 753;
    for(int i = 0; i < S.size()-2; i++) {
        int X = 0;
        X += (S[i]-'0') * 100;
        X += (S[i+1]-'0') * 10;
        X += (S[i+2]-'0');
        if(abs(X-753) < min) {
            min = abs(X-753);
        }
    }

    cout << min << endl;

    return 0;
}
