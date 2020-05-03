#include <iostream>
using namespace std;

int main()
{
    long long I5[6209];
    long long i;
    int X;

    for(i = 0; i < 6209; i++) {
        I5[i] = i * i * i * i * i;
        //cout << i << ":" << I5[i] << endl;
    }

    cin >> X;

    int A, B;
    for(A = 0; A < 6209; A++) {
        for(B = 0; B < 6209; B++) {
            if(+I5[A]+I5[B] == X) {
                //cout << "A+B" << endl;
                B *= -1;
                goto out;
            } else if(+I5[A]-I5[B] == X) {
                //cout << "A-B" << endl;
                goto out;
            } else if(-I5[A]+I5[B] == X) {
                //cout << "-A+B" << endl;
                A *= -1;
                B *= -1;
                goto out;
            } else if(-I5[A]-I5[B] == X) {
                A *= -1;
                goto out;
            }
        }
    }
out:

    cout << A << " " << B << endl;

    return 0;
}
