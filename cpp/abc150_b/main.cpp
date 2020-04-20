#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    string S;
    int count;

    cin >> N >> S;

    count = 0;
    for(int i = 0; i < N-2; i++) {
        if(S[i] == 'A' && S[i+1] == 'B' && S[i+2] == 'C') {
            count += 1;
        }
    }

    cout << count << endl;

    return 0;
}
