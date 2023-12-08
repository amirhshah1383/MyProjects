#include <iostream>

using namespace std;

 main() {
 	
 	long long int salary;
 	
 	cout <<"please enter your salary : ";
 	cin >> salary;
 	
 	if (salary < 6000000) {
 		cout <<"your salary after tax is equal to : "<<salary - 0.0;
	 }
	else if (salary >= 6000000 && salary < 8000000) {
		cout <<"your salary after tax is equal to : "<<salary - (salary * 0.05);
	}
	else if (salary >= 8000000 && salary < 10000000) {
		cout <<"your salary after tax is equal to : "<<salary - (salary * 0.10);
	}
	else if (salary >= 10000000 && salary < 14000000) {
		cout <<"your salary after tax is equal to : "<<salary - (salary * 0.15);
	}
	else if (salary >= 14000000 && salary < 18000000) {
		cout <<"your salary after tax is equal to : "<<salary - (salary * 0.20);
	}
	else if (salary >= 18000000 && salary < 25000000) {
		cout <<"your salary after tax is equal to : "<<salary - (salary * 0.25);
	}
	else if (salary >= 25000000) {
		cout <<"your salary after tax is equal to : "<<salary - (salary * 0.35);
	}
}