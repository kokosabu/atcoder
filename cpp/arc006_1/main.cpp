#include <iostream>
using namespace std;

int main()
{
    int E[6];
    for(int i = 0; i < 6; i++) {
        cin >> E[i];
    }
    int B;
    cin >> B;
    int L[6];
    for(int i = 0; i < 6; i++) {
        cin >> L[i];
    }


    bool is_b = false;
    int count = 0;
    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 6; j++) {
            if(L[i] == B) {
                is_b = true;
            }
            if(L[i] == E[j]) {
                count += 1;
            }
        }
    }

    if(count == 6) {
        cout << 1 << endl;
    } else if(count == 5 && is_b) {
        cout << 2 << endl;
    } else if(count == 5) {
        cout << 3 << endl;
    } else if(count == 4) {
        cout << 4 << endl;
    } else if(count == 3) {
        cout << 5 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}
