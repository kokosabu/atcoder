#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    int answer = 0;
    while(1) {
        if(((A*answer)-answer+1) >= B) {
            break;
        }
        answer += 1;
    }
    cout << answer << endl;
    return 0;
}
