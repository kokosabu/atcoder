#include <iostream>
using namespace std;

int main()
{
    unsigned long long num = 42;
    
    while(1) {
        num *= 2;
        if(num > 130000000) {
            break;
        }
    }

    cout << num << endl;
    return 0;
}
