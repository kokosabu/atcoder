#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    int sum = 0;
    if(A > B) {
        for(int i = 1; i <= A; i++) {
            cout << i << " ";
            sum += i;
        }
        for(int i = 1; i < B; i++) {
            cout << -1 * i << " ";
            sum -= i;
        }
        cout << -1 * sum << endl;
    } else if(A < B) {
        for(int i = 1; i <= B; i++) {
            cout << -1 * i << " ";
            sum += i;
        }
        for(int i = 1; i < A; i++) {
            cout << i << " ";
            sum -= i;
        }
        cout << sum << endl;
    } else {
        for(int i = 1; i < A; i++) {
            cout << i << " " << -1 * i << " ";
        }
        cout << A << " " << -1 * A << endl;
    }

    return 0;
}
