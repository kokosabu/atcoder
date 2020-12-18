#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int count = 0;
    int pre_a = -1;
    for(int i = 0; i < N; i++) {
        int a;
        cin >> a;
        if(pre_a != -1 && a == pre_a) {
            count += 1;
            pre_a = -1;
        } else {
            pre_a = a;
        }
    }

    cout << count << endl;

    return 0;
}
