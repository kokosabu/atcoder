#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    string S;
    cin >> S;

    int count = 1;
    int pre_slime = S[0];
    for(int i = 1; i < S.size(); i++) {
        if(S[i] != pre_slime) {
            count += 1;
            pre_slime = S[i];
        }
    }
    cout << count << endl;
    return 0;
}
