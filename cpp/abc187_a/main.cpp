#include <iostream>
using namespace std;

int main()
{
    string A, B;
    cin >> A >> B;
    int A_num = (A[0]-'0') + (A[1]-'0') + (A[2]-'0');
    int B_num = (B[0]-'0') + (B[1]-'0') + (B[2]-'0');
    cout << max(A_num, B_num) << endl;
    return 0;
}
