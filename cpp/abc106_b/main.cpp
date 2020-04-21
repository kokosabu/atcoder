#include <iostream>
using namespace std;

int main()
{
    int N;
    int i, j;
    int count;
    int c;
    cin >> N;
    count = 0;
    for(i = 1; i <= N; i += 2) {
        c = 0;
        for(j = 1; j <= i; j += 2) {
            if(i%j == 0) {
                c += 1;
            }
        }
        if(c == 8) {
            count += 1;
        }
    }
    cout << count << endl;
    return 0;
}
