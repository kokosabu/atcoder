#include <iostream>
using namespace std;

int main()
{
    //  1  2  3
    //  5  4  3   5-4 = 1 
    //  7  8  9   7-8 = -1
    // 17 16 15  17-16 = 1
    // 31 32 33  31-32 = -1
    // 65 64 63 
    //
    //
    // (B+C) (A+C) (A+B)   (B+C)-(A+C)=B-A
    // (2A+B+C) (2B+A+C) (2C+A+B)  (2A+B+C)-(2B+A+C)=A-B
    // (2A+3B+3C) (3A+2B+3C) (3A+3B+2C) (2A+3B+3C)-(3A+2B+3C)=-A+B

    int A, B, C;
    unsigned long long K;
    cin >> A >> B >> C >> K;

    if(K%2 == 1) {
        cout << B-A << endl;
    } else {
        cout << A-B << endl;
    }

    return 0;
}
