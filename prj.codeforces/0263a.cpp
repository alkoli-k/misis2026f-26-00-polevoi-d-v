#include <iostream>
#include <cstdlib>
int main() {
    int answer = 0;
    for (int i = 0; i < 25; ++i) {
        int value;
        if (!(std::cin >> value)) return 0;
        if (value == 1) answer = std::abs(2 - i / 5) + std::abs(2 - i % 5);
    }
    std::cout << answer << '\n';
}
