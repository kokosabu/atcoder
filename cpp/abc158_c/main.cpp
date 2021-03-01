#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    int low;
    if(((float)A/0.08) > ((float)B/0.10)) {
        low = (int)((float)A/0.08);
    } else {
        low = (int)((float)B/0.10);
    }

    int high;
    if(((float)(A+1)/0.08) < ((float)(B+1)/0.10)) {
        high = (int)((float)(A+1)/0.08);
    } else {
        high = (int)((float)(B+1)/0.10);
    }

    while(low < high) {
        if((int)(low*0.08) == A && (int)(low*0.10) == B) {
            break;
        }
        low += 1;
    }

    if(low < high) {
        cout << low << endl;
    } else {
        cout << -1 <<endl;
    }

    return 0;
}
