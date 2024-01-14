#include <iostream>

using namespace std;

bool isprime(int num) {
	if(num <= 1)
	return false;
	for (int i = 2; i*i <= num; i++) {
		if(num%i==0)
		return false;
	}
	return true;
}
int main() {
	int n,sum=0;
	
	std::cout<<"enter a positive integer: ";
	std::cin>>n;
	
	for(int i = 2;i<n;i++) {
		if(isprime(i))
		sum +=i;
	}
	std::cout<<"sum of all prime numbers less than"<<n<<"is: "<<sum;
}
	
