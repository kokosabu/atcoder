#include <iostream>

using namespace std;

int main()
{
    int A, B;

    cin >> A >> B;

    if (A > 0 && B > 0)
    {
        cout << "Alloy";
    }
    else if (A > 0)
    {
        cout << "Gold";
    }
    else
    {
        cout << "Silver";
    }
    
    return 0;
}