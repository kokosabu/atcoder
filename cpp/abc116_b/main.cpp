#include <iostream>
using namespace std;

int f(int n)
{
    if((n%2) == 0) {
        return n / 2;
    } else {
        return 3 * n + 1;
    }
}

int main()
{
    int check[1000000+1] = {};

    int s;
    cin >> s;

    int i = 1;
    int a = s;
    check[a] = 1;
    while(1) {
        int new_a = f(a);
        i += 1;
        if(check[new_a] == 1) {
            break;
        }
        check[new_a] = 1;
        a = new_a;
    }

    cout << i << endl;

    return 0;
}
