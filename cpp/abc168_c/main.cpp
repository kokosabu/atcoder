#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double A, B;
    int H, M;

    cin >> A >> B >> H >> M;

    //double theta = fabs((H*30+M*0.5)-(M*6));
    //double theta = fabs(fmod(H*30+M*0.5, 180)-fmod(M*6, 180));
    double H_t = H*30+M*0.5;
    double M_t = M*6;
    double theta;
    if(H_t >= M_t) {
        theta = H_t - M_t;
    } else {
        theta = M_t - H_t;
    }
    //double theta = fabs((H*30+M*0.5)-(M*6));
    //double theta = 80;
    // H : 300 - 60, 120 , 180->120
    // M : 240 - 60, 120 , 180->60

    //cout << H*30+(H*40/60*6) << endl;
    //cout << M*6 << endl;
    //cout << theta << endl;

    // a^2 = b^2 + c^2 + 2bc cosA
    cout << std::fixed << std::setprecision(15) << sqrt(pow(A, 2) + pow(B, 2) - 2*A*B*cos(theta*M_PI/180)) << endl;

    return 0;
}
