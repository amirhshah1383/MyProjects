#include <iostream>

using namespace std;

int main() {
	int n, sum = 0;
	
	std::cout << "enter an integer: ";
	std::cin >> n;
	
	for (int i = 1; i <= n; i++) {
		if (n%i == 0){
			sum += i;
		}
	}
	std::cout << "sum of divisors: "<<sum;
}
