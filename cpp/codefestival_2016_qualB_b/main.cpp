#include <iostream>
using namespace std;

int main()
{
    int N, A, B;
    cin >> N >> A >> B;
    string S;
    cin >> S;

    int total_pass = 0;
    int b_rank = 0;
    for(int i = 0; i < S.size(); i++) {
        if(S[i] == 'b') {
            b_rank += 1;
        }

        if(S[i] == 'a' && total_pass < (A+B)) {
            total_pass += 1;
            cout << "Yes" << endl;
        } else if(S[i] == 'b' && total_pass < (A+B) && b_rank <= B) {
            total_pass += 1;
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
