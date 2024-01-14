#include <iostream>

using namespace std;


	int main() {
		int m,n;
		int result = 1;
		
		std::cout << "enter two positive integres: ";
		std::cin >> m >> n;
		
		for(int i = 0; i < n; i++) {
			result *= m;
		}
		 std::cout<< m << "raised to the power of" << n << "is: " << result;
	}
	
