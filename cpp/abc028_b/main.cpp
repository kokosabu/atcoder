#include <iostream>
using namespace std;

int main()
{
    string S;
    cin >> S;

    int counts[6] = {};
    for(int i = 0; i < S.size(); i++) {
        counts[S[i]-'A'] += 1;
    }

    for(int i = 0; i < 5; i++) {
        cout << counts[i] << " ";
    }
    cout << counts[5] << endl;


    return 0;
}
