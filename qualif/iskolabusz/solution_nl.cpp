#include <iostream>

int main() {
    int h = 1, n;
    std::cin >> n;
    while (n > h) h *= 2;
    std::cout << 2 * n - h;
}