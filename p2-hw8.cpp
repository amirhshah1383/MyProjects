#include <iostream>



using namespace std;

int main() {
    int array1[5];
    int array2[5];

 
    cout << "please enter number for array 1: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "element " << i + 1 << ": ";
        cin >> array1[i];
    }

    cout << "please enter number for array 2: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "element " << i + 1 << ": ";
        cin >> array2[i];
    }

    
    for (int i = 0; i < 5; i++) {
        int temp = array1[i];
        array1[i] = array2[i];
        array2[i] = temp;
    }

    
    cout << "new array 1: ";
    for (int i = 0; i < 5; i++) {
        cout << array1[i] << " ";
    }
    
    cout << endl;

    cout << "new array 2: ";
    for (int i = 0; i < 5; i++) {
        cout << array2[i] << " ";
    }
    
   return 0;
}