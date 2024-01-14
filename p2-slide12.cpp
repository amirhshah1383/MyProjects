#include <iostream>

int power(int x, int y) {
    if (y == 0) {
        return 1;
    } else {
        return x * power(x, y - 1);
    }
}

int main() {
    int x, y;
    std::cout << "Enter the base (x): ";
    std::cin >> x;
    std::cout << "Enter the exponent (y): ";
    std::cin >> y;

    int result = power(x, y);
    std::cout << x << " raised to the power of " << y << " is: " << result << std::endl;

    return 0;
}