#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    char pin[10];
    for(int i = 0; i < 10; i++) {
        pin[i] = 'x';
    }
    for(int i = 0; i < a; i++) {
        int p;
        cin >> p;
        pin[p] = '.';
    }
    for(int i = 0; i < b; i++) {
        int q;
        cin >> q;
        pin[q] = 'o';
    }
    cout << pin[7] << " " << pin[8] << " " << pin[9] << " " << pin[0] << endl;;
    cout << " " << pin[4] << " " << pin[5] << " " << pin[6] << endl;
    cout << "  " << pin[2] << " " << pin[3] << endl;
    cout << "   " << pin[1] << endl;
#if 0
o x x o
 x . x
  x .
   .
#endif
    return 0;
}
