#include <iostream>
using namespace std;

int main()
{
    int N, A, B;
    cin >> N >> A >> B;
    if(((B-A)%2) == 1) {
        cout << "Borys" << endl;
    } else if(((B-A)%2) == 0) {
        cout << "Alice" << endl;
    }
    return 0;
}
