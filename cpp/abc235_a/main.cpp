#include <iostream>
using namespace std;

int main()
{
    char a;
    char b;
    char c;
    cin >> a >> b >> c;

    int ia = a - '0';
    int ib = b - '0';
    int ic = c - '0';

    cout << ia*100 + ia*10 + ia + ib*100 + ib*10 + ib + ic*100 + ic*10 + ic << endl;

    return 0;
}
