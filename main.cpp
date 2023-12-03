#include <iostream>

using namespace std;

 main() {
 	
 	float a,b,c;
 	
 	int x,y,z;
 	
 	cout << "please enter a number for x : ";
 	cin >> x;
 	cout << "please enter a number for y : ";
    cin >> y;
    cout << "please enter a number for z : ";
    cin >> z;
    
    a = (x-y) * (x+z);
    b =((x+y+z) * (x+y+z)) + 1;
    c = a/b;
    cout << "answer = "<<c;
 	
	
}