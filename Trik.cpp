#include <iostream>
using namespace std;

int main() {
    char moves[50];
    cin >> moves;
    int ball = 1;
    int i = 0;
    while (moves[i] != NULL) {
        char move = moves[i];
        if (move == 'A') {
            if (ball == 1) {
                ball = 2;
            }
            else if (ball == 2) {
                ball = 1;
            }
        }
        else if (move == 'B') {
            if (ball == 2) {
                ball = 3;
            }
            else if (ball == 3) {
                ball = 2;
            }
        }
        else if (move == 'C') {
            if (ball == 1) {
                ball = 3;
            }
            else if (ball == 3) {
                ball = 1;
            }
        }
        i++;
    }
    cout << ball;
}