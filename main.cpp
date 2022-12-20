#include <iostream>

int main() {
    bool infinity = true;
    int s1, s2, s3;
    int score = 0, trying = 0;
    char start;
    std::cout << "Welcome to Casino \"I/iTMO\"" << " \n";
    std::cout << "Your score: " << score << " \n";
    std::cout << "If you need help (commands) enter \"h\"" << " \n";
    for(;;) {
        do {
            std::cin >> start;
            if (start == 'q') {
                std::cout << "Game Over" << " \n";
                std::cout << "Created by @bloom_guy" << std::endl;
                return 0;
            }
            if (start == 'h') {
                std::cout << "To spin enter \"s\"" << " \n";
                std::cout << "To see your score enter \"b\"" << " \n";
                std::cout << "To stop the game enter \"q\"" << " \n";
            }
            if (start == 's') {
                s1 = 1+rand() % 3;
                s2 = 1+rand() % 3;
                s3 = 1+rand() % 3;
                std::cout << '[' << s1 << '-' << s2 << '-' << s3 << ']' <<" \n";
            }
            if (start == 's' && s1 == s2 && s2 == s3) {
                std::cout << "$$$$$ JACKPOT $$$$$" << " \n";
                score = ++score;
                trying = ++trying;

            }
            if (start == 's' && (s1 != s2 || s2 != s3)) {
                std::cout << "You suck!" << " \n";
                trying = ++trying;
            }
            if (start == 'b') {
                std::cout << "------------" << " \n";
                std::cout << "Your score: " << score << " \n";
                std::cout << "Your attemps: " << trying << " \n";
                std::cout << "------------" << " \n";
            }
        } while (infinity);
    }
    return 0;
}
