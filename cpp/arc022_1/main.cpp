#include <iostream>
using namespace std;

int main()
{
    string S;
    cin >> S;

    int index = 0;
    int correct = 0;
    while(index < S.size()) {
        if(S[index] == 'i' || S[index] == 'I') {
            index += 1;
            correct += 1;
            break;
        }
        index += 1;
    }
    while(index < S.size()) {
        if(S[index] == 'c' || S[index] == 'C') {
            index += 1;
            correct += 1;
            break;
        }
        index += 1;
    }
    while(index < S.size()) {
        if(S[index] == 't' || S[index] == 'T') {
            index += 1;
            correct += 1;
            break;
        }
        index += 1;
    }
    if(correct == 3) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
