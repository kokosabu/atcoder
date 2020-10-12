#include <iostream>
using namespace std;

int main()
{
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    bool equal = false;

    if(A == (B+C+D)) {
        equal = true;
    } else if(B == (A+C+D)) {
        equal = true;
    } else if(C == (A+B+D)) {
        equal = true;
    } else if(D == (A+B+C)) {
        equal = true;
    } else if((A+B) == (C+D)) {
        equal = true;
    } else if((A+C) == (B+D)) {
        equal = true;
    } else if((A+D) == (B+C)) {
        equal = true;
    }

    if(equal) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
