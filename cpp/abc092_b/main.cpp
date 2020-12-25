#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int D, X;
    cin >> D >> X;
    int eat = 0;
    for(int i = 0; i < N; i++) {
        int A;
        cin >> A;
        eat += (D-1)/A + 1;
    }
    cout << X+eat << endl;
    return 0;
}
