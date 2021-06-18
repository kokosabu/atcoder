#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> answers(N);

    for(int x = 1; x*x <= N; x++) {
        for(int y = 1; y*y <= N; y++) {
            for(int z = 1; z*z <= N; z++) {
                int fn = x*x + y*y + z*z + x*y + y*z + z*x;
                if(fn <= N) {
                    answers[fn-1] += 1;
                }
            }
        }
    }

    for(int i = 0; i < N; i++) {
        cout << answers[i] << endl;
    }

    return 0;
}
