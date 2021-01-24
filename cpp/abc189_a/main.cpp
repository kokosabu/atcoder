#include <iostream>
using namespace std;

int main()
{
    string C;
    cin >> C;
    if(C[0] == C[1] && C[1] == C[2]) {
        cout << "Won" << endl;
    } else {
        cout << "Lost" << endl;
    }
    return 0;
}
