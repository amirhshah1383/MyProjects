#include <iostream>

using namespace std;

int main() {
	int m,n;
	std::cout << "enter two positive integres: ";
	std::cin >> m >> n;
	
	int result = 0;
	while (m >= n) {
		m -= n;
		result++;
	}
	std::cout << "the result of dividing " << m << "by" << n << "is: " <<result;
}
