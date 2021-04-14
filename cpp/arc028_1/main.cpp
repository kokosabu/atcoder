#include <iostream>
using namespace std;

int main()
{
    int N, A, B;
    cin >> N >> A >> B;

    int turn = 1;
    while(1) {
        if((turn%2) == 1) {
            N -= A;
            if(N <= 0) {
                cout << "Ant" << endl;
                break;
            }
        } else {
            N -= B;
            if(N <= 0) {
                cout << "Bug" << endl;
                break;
            }
        }
        turn += 1;
    }

    return 0;
}
