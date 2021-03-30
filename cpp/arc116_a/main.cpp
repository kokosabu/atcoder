#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for(int i = 0; i < T; i++) {
        long long c;
        cin >> c;

        /*
        int odd = 0;
        int even = 0;
        long long x = c;
        for(int j = 1; j < x; j++) {
            if((c%j) == 0) {
                x = c / j;
                if((j%2) == 0) {
                    even += 1;
                } else {
                    odd += 1;
                }
                if((x%2) == 0) {
                    even += 1;
                } else {
                    odd += 1;
                }
            }
        }

        if(odd == even) {
            cout << "Same" << endl;
        } else if(odd > even) {
            cout << "Odd" << endl;
        } else {
            cout << "Even" << endl;
        }
        */
        if(c%4 == 0) {
            cout << "Even" << endl;
        } else if(c%2 == 0) {
            cout << "Same" << endl;
        } else {
            cout << "Odd" << endl;
        }
    }

    return 0;
}
