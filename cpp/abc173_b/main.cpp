#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    string S;

    int AC, WA, TLE, RE;

    cin >> N;

    AC = 0;
    WA = 0;
    TLE = 0;
    RE = 0;

    for(int i = 0; i < N; i++) {
        cin >> S;
        if(S == "AC") {
            AC += 1;
        } else if(S == "WA") {
            WA += 1;
        } else if(S == "TLE") {
            TLE += 1;
        } else if(S == "RE") {
            RE += 1;
        }
    }

    cout << "AC x " << AC << endl;
    cout << "WA x " << WA << endl;
    cout << "TLE x " << TLE << endl;
    cout << "RE x " << RE << endl;

    return 0;
}
