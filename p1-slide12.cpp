#include <iostream>
#include <cmath>

int main() {
    double x;
    std::cout << "Enter the value of x: ";
    std::cin >> x;

    double tangent = tan(x);
    std::cout << "Tangent of " << x << " is: " << tangent << std::endl;

    return 0;
}