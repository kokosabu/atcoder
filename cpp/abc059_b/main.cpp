#include <iostream>
using namespace std;

int main()
{
  string A;
  cin >> A;
  string B;
  cin >> B;

  if(A.size() > B.size()) {
    cout << "GREATER" << endl;
  } else if(A.size() < B.size()) {
    cout << "LESS" << endl;
  } else if(A > B) {
    cout << "GREATER" << endl;
  } else if(A < B) {
    cout << "LESS" << endl;
  } else {
    cout << "EQUAL" << endl;
  }

  return 0;
}
