#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    int max = A;
    if(B > max) {
        max = B;
    }
    if(C > max) {
        max = C;
    }

    int count = 0;
    int d = (max - A) / 2;
    count += d;
    A += d * 2;
    d = (max - B) / 2;
    count += d;
    B += d * 2;
    d = (max - C) / 2;
    count += d;
    C += d * 2;

    if(A == B && B == C) {
        ;
    } else if(A == max && (B+1) == max && (C+1) == max) {
        count += 1;
    } else if((A+1) == max && B == max && (C+1) == max) {
        count += 1;
    } else if((A+1) == max && (B+1) == max && C == max) {
        count += 1;
    } else {
        count += 2;
    }

    cout << count << endl;

    return 0;
}
