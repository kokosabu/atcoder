#include <iostream>
using namespace std;

int main()
{
    string A;
    cin >> A;
    int B;
    cin >> B;
    if(B%A.size() != 0) {
        cout << A[(B%A.size())-1] << endl;
    } else {
        cout << A[A.size()-1] << endl;
    }
    return 0;
}
