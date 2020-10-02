#include <iostream>
using namespace std;

int main()
{
    string S;
    cin >> S;
    int number = 0;
    for(int i = 0; i < S.size(); i++) {
        if(S[i] == '+') {
            number += 1;
        } else if(S[i] == '-') {
            number -= 1;
        }
    }
    cout << number << endl;
    return 0;
}
