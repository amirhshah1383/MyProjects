#include <iostream>


using namespace std;

int main() {
    int arr[10];
    cout << "Enter 10 elements of the array: " << endl;


    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    int smallest = INT_MAX; 
    int secondSmallest = INT_MAX; 

    
    for (int i = 0; i < 10; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    cout << "The second smallest element is: " << secondSmallest << endl;

    return 0;
}
