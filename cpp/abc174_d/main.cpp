#include <iostream>
using namespace std;

int main()
{
    int N;
    string c;

    cin >> N;
    cin >> c;

    int r_count = 0;
    for(int i = 0; i < N; i++) {
        if(c[i] == 'R') {
            r_count += 1;
        }
    } 

    int count = 0;
    for(int i = 0; i < r_count; i++) {
        if(c[i] == 'W') {
            count += 1;
        }
    } 

    cout << count << endl;

    return 0;
}
