#include <iostream>
using namespace std;

int main()
{
    int N, M, T;
    cin >> N >> M >> T;
    int battery = N;
    int position = 0;
    bool is_yes = true;
    for(int i = 0; i < M; i++) {
        int A, B;
        cin >> A >> B;
        battery -= (A - position);
        if(battery <= 0) {
            is_yes = false;
        }
        battery += (B - A);
        if(battery > N) {
            battery = N;
        }
        position = B;
    }
    battery -= (T - position);
    if(battery <= 0) {
        is_yes = false;
    }

    if(is_yes) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
