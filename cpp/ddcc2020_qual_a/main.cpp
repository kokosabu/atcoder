#include <iostream>
using namespace std;

int main()
{
    int X, Y;
    int score;
    cin >> X >> Y;
    score = 0;
    if(X == 3) {
        score += 100000;
    } else if(X == 2) {
        score += 200000;
    } else if(X == 1) {
        score += 300000;
    }
    if(Y == 3) {
        score += 100000;
    } else if(Y == 2) {
        score += 200000;
    } else if(Y == 1) {
        score += 300000;
    }
    if(X == 1 && Y == 1) {
        score += 400000;
    }

    cout << score << endl;
    
    return 0;
}
