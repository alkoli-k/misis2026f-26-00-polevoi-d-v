#include <iostream>
#include <vector>
int main() {
    int tests;
    if (!(std::cin >> tests)) return 0;
    while (tests--) {
        int n;
        if (!(std::cin >> n)) return 0;
        std::vector<int> a;
        for (int place = 1; n > 0; n /= 10, place *= 10) {
            if (n % 10 != 0) a.push_back(n % 10 * place);
        }
        std::cout << a.size() << '\n';
        for (int value : a) std::cout << value << ' ';
        std::cout << '\n';
    }
}
