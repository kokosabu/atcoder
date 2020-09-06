#include <iostream>
using namespace std;

int main()
{
    string day;
    cin >> day;
    int remain = 0;
    if(day == "Monday") {
        remain = 5;
    } else if(day == "Tuesday") {
        remain = 4;
    } else if(day == "Wednesday") {
        remain = 3;
    } else if(day == "Thursday") {
        remain = 2;
    } else if(day == "Friday") {
        remain = 1;
    }

    cout << remain << endl;

    return 0;
}
