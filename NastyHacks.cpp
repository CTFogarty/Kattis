#include <iostream>
using namespace std;

int main() {
  int n, r, e, c;
  int i = 0;
  cin >> n;
  while (i < n) {
    cin >> r;
    cin >> e;
    cin >> c;
    int sum = e - c;
    if (r < sum) {
      cout << "advertise" << endl;
    }
    else if (r > sum) {
      cout << "do not advertise" << endl;
    }
    else if (r == sum){
      cout << "does not matter" << endl;
    }
    i++;
  }
}
