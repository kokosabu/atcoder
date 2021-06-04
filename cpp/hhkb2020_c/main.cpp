#include <iostream>
using namespace std;

bool is_hit[200000+1];
int main()
{
    int N;
    cin >> N;

    int min = 0;

    for(int i = 0; i < N; i++) {
        int p;
        cin >> p;
        is_hit[p] = true;
        while(is_hit[min] == true) {
            min += 1;
        }
        cout << min << endl;
    }

    return 0;
}
