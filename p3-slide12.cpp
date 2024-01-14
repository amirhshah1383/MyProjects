#include <iostream>

int gcd(int x, int y) {
    if (y == 0) {
        return x;
    } else {
        return gcd(y, x % y);
    }
}

int main() {
    int x, y;
    std::cout << "Enter two numbers: ";
    std::cin >> x >> y;
    
    int result = gcd(x, y);
    
    std::cout << "The greatest common divisor is: " << result << std::endl;
    
    return 0;
}