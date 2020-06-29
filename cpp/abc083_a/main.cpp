#include <iostream>
using namespace std;

int main()
{
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    int tmp = A + B - C - D;
    if(tmp > 0) {
        cout << "Left" << endl;
    } else if(tmp == 0) {
        cout << "Balanced" << endl;
    } else {
        cout << "Right" << endl;
    }
    return 0;
}
