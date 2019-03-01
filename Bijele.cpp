#include <iostream>
using namespace std;

int main() {
    int k, q, r, b, n, p;
    cin >> k;
    cin >> q;
    cin >> r;
    cin >> b;
    cin >> n;
    cin >> p;

    if (k == 0) {
        k = 1;
    }
    else if (k > 0) {
        k = 1 - k;
    }

    if (q == 0) {
        q = 1;
    }
    else if (q > 0) {
        q = 1 - q;
    }

    if (r == 0) {
        r = 2;
    }
    else if (r > 0) {
        r = 2 - r;
    }

    if (b == 0) {
        b = 2;
    }
    else if (b > 0) {
        b = 2 - b;
    }

    if (n == 0) {
        n = 2;
    }
    else if (n > 0) {
        n = 2 - n;
    }

    if (p == 0) {
        p = 8;
    }
    else if (p > 0) {
        p = 8 - p;
    }

    cout << k << " " << q << " " << r << " " << b << " " << n << " " << p;
}