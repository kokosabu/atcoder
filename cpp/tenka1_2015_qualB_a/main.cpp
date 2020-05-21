#include <iostream>
using namespace std;

int fibo3(int a)
{
    if(a == 0) { return 100; }
    if(a == 1) { return 100; }
    if(a == 2) { return 200; }
    return fibo3(a-3)+fibo3(a-2)+fibo3(a-1);
}

int main()
{
    cout << fibo3(19) << endl;
}
