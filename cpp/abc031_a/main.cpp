#include <iostream>
using namespace std;

int main()
{
    int A, D;
    cin >> A >> D;
    if(A <= D) {
        cout << (A+1)*D << endl;
    } else {
        cout << A*(D+1) << endl;
    }
    return 0;
}
