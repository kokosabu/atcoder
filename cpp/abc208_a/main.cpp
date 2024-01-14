#include <iostream>

using namespace std;

int main()
{
    int A, B;

    cin >> A >> B;

    if (A * 6 >= B && A <= B)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}