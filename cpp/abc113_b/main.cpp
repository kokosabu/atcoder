#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    double T, A;
    cin >> T >> A;

    double max = -1;
    int index = -1;
    for(int i = 0; i < N; i++) {
        double H;
        cin >> H;

        double a = T - H * 0.006;
        if(index == -1 || abs(A-a) < abs(A-max)) {
            max = a;
            index = i+1;
        }
    }

    cout << index << endl;

    return 0;
}
