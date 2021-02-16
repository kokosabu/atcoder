#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int price = 0;
    price += N/10 * 100;
    N = N%10;

    if(N >= 7) {
        cout << price + 100 << endl;
    } else {
        cout << price + N*15 << endl;
    }

    return 0;
}
