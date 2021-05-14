#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int current = 0;
    bool is_success = true;
    for(int i = 0; i < N; i++) {
        int H;
        cin >> H;

        if(H > current) {
            current = H-1;
        } else if(H == current) {
            ;
        } else {
            is_success = false;
            break;
        }
    }

    if(is_success) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
