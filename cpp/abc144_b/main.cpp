#include <iostream>
using namespace std;

int main()
{
    int N;
    int i, j;
    cin >> N;
    for(i = 1; i <= 9; i++) {
        for(j = 1; j <= 9; j++) {
            if((i*j) == N) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}
