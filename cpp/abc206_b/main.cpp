#include <iostream>
using namespace std;

int main()
{
    unsigned long long N;
    cin >> N;
    int i;
    unsigned long long count = 0;
    for(i = 1; ; i++) {
        count += i;
        if(count >= N) {
            break;
        }
    }
    cout << i << endl;
    return 0;
}
