#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int a_min = 100000+1;
    int b_min = 100000+1;
    int a_min_index = -1;
    int b_min_index = -1;
    int a_min2 = 100000+1;
    int b_min2 = 100000+1;
    
    for(int i = 0; i < N; i++) {
        int A, B;
        cin >> A >> B;
        if(A < a_min) {
            a_min2 = a_min;
            a_min = A;
            a_min_index = i;
        } else if(A < a_min2) {
            a_min2 = A;
        }
        if(B < b_min) {
            b_min2 = b_min;
            b_min = B;
            b_min_index = i;
        } else if(B < b_min2) {
            b_min2 = B;
        }
    }

    if(a_min_index == b_min_index) {
        if((a_min+b_min) < (a_min2) && (a_min+b_min) < (b_min2)) {
            cout << a_min+b_min << endl;
        } else if(a_min > b_min && a_min > b_min2) {
            cout << a_min << endl;
        } else if(b_min > a_min && b_min > a_min2) {
            cout << b_min << endl;
        }else if(a_min2 < b_min2) {
            cout << a_min2 << endl;
        } else {
            cout << b_min2 << endl;
        }
    } else if(a_min > b_min) {
        cout << a_min << endl;
    } else {
        cout << b_min << endl;
    }

    return 0;
}
