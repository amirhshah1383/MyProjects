#include <iostream>

using namespace std;

int gcd(int m, int n) {
	if(n == 0)
	return m;
	else
	return gcd(n,m%n);
	
}
int main() {
	int m, n;
	cout<<"enter two positive integres: ";
	cin>> m >> n;
	
	int result = gcd(m,n);
	
	cout<<"the greatest common divisor of"<<m <<"and" <<n<<"is: "<<result;
}
