#include <iostream>
using namespace std;

int main()
{
    int N, A, B;
    cin >> N >> A >> B;
    cout << ((A >= B)? B : A) << " " << (((A+B-N)>=0)? (A+B-N) : 0) << endl;
    return 0;
}
