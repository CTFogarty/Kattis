#include <iostream>
using namespace std;

int main() {
    int n, temp;
    int count = 0;
    cin >> n;
    while (n--) {
        cin >> temp;
        if (temp < 0) {
            count++;
        }
    }
    cout << count;

}