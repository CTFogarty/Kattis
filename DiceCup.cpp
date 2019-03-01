#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    cin >> m;
    
    if (n > m) {
        int o = m + 1;
        while (o <= n + 1) {
            cout << o << endl;
            o = o + 1;
        }
    }
    else if (m > n) {
        int o = n + 1;
        while (o <= m + 1) {
            cout << o << endl;
            o = o + 1;
        }
    }
    else {
        cout << m + 1;
    }
}