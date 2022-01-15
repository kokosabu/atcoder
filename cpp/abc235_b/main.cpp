#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int Ht;
    cin >> Ht;
    for(int i = 1; i < N; i++) {
        int H;
        cin >> H;
        if(Ht < H) {
            Ht = H;
        } else {
            break;
        }
    }
    cout << Ht << endl;
    return 0;
}
