#include <iostream>
using namespace std;

int main()
{
    string S;
    cin >> S;
    string T;
    cin >> T;

    if(S == "Y") {
        cout << static_cast<char>(T[0] + ('A'-'a')) << endl;
    } else {
        cout << T << endl;
    }
    return 0;
}
