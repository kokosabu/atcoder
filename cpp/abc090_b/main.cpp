#include <iostream>
#include <string>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    int count = 0;
    for(int i = A; i <= B; i++) {
        string s = to_string(i);
        if(s[0] == s[4] && s[1] == s[3]) {
            count += 1;
        }
    }

    cout << count << endl;

    return 0;
}
