#include <iostream>
using namespace std;

int dec(char c)
{
    switch(c) {
        case 'A':
            return 10;
        case 'B':
            return 11;
        case 'C':
            return 12;
        case 'D':
            return 13;
        case 'E':
            return 14;
        case 'F':
            return 15;
        default:
            break;
    }
    return 0;
}

int main()
{
    char X, Y;
    cin >> X >> Y;

    int x = dec(X);
    int y = dec(Y);

    if(x < y) {
        cout << "<" << endl;
    } else if(x > y) {
        cout << ">" << endl;
    } else {
        cout << "=" << endl;
    }

    return 0;
}
