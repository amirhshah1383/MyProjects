#include <iostream>


#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    int sum = 0;
 
    cout <<"please enter 10 number: " << endl;
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
        sum += numbers[i];
    }
    
    int maxNumber = numbers[0];
    int minNumber = numbers[0];
    
    for (int i = 1; i < 10; i++) {
        if (numbers[i] > maxNumber) {
            maxNumber = numbers[i];
        }
        
        if (numbers[i] < minNumber) {
            minNumber = numbers[i];
        }
    }
    
    double average = (maxNumber + minNumber) / 2.0;
    
    cout << "average: "<< average << endl;
    
    return 0;
}
	
