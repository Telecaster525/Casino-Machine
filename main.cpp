#include <iostream>
using namespace std;

int main() {
    int s1, s2, s3, inf, score = 0;
    char start;
    inf = 1;
    cout << "Welcome to Casino I/iTMO !" << " \n";
    cout << "Created by @bloom_guy" << " \n";
    cout << "Your score:" << score << " \n";
    cout << "To see your score enter \"b\"" << " \n";
    for(;;) {
        do {
            cout << "Enter \"s\" to spin:" << " \n";
            cin >> start;
            if (start == 's') {
                s1 = rand() % 4;
                s2 = rand() % 4;
                s3 = rand() % 4;
                cout << s1 << ' ';
                cout << s2 << ' ';
                cout << s3 << " \n";
            }
            if (start == 's' && s1 == s2 && s2 == s3) {
                cout << "$$$_JACKPOT_$$$" << " \n";
                score = ++score;
            }
            if (start == 's' && (s1 != s2 || s2 != s3)) {
                cout << "You suck" << " \n";
            }
            if (start == 'b') {
                cout << "Your score:" << score << " \n";
            }
        } while (inf > 0);
    }
    return 0;
}