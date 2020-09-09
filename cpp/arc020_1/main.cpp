#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    if(abs(A) == abs(B)) {
        cout << "Draw" << endl;
    } else if(abs(A) > abs(B)) {
        cout << "Bug" << endl;
    } else {
        cout << "Ant" << endl;
    }

    return 0;
}
