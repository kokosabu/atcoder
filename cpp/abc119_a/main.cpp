#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int y, m, d;
    scanf("%d/%d/%d", &y, &m, &d);
    if(m <= 4) {
        cout << "Heisei" << endl;
    } else {
        cout << "TBD" << endl;
    }
    return 0;
}
