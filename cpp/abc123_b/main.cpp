#include <iostream>
using namespace std;

int main()
{
    int time[5];
    for(int i = 0; i < 5; i++) {
        cin >> time[i];
    }

    int last_index = 0;
    int last = time[0]%10;
    for(int i = 1; i < 5; i++) {
        if((time[i]%10 != 0) && (time[i]%10 < last)) {
            last_index = i;
            last = time[i]%10;
        }
    }

    int total = 0;
    for(int i = 0; i < 5; i++) {
        if(i == last_index) {
            total += time[i];
        } else {
            if(time[i]%10 == 0) {
                total += time[i];
            } else {
                total += (time[i]/10 + 1) * 10;
            }
        }
    }

    cout << total << endl;

    return 0;
}
