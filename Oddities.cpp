#include <iostream>
using namespace std;

int input;

int main() {
    int n;
    cin >> n;
    while (n--) {
        cin >> input;
        if (input%2 == 0) {
            cout << input << " is even" << endl;
        }
        else {
            cout << input << " is odd" << endl;
        }      
    }
    
}