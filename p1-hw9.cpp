#include <iostream>



using namespace std;

void insertNumber(int arr[], int size, int num) {
    int i = size - 1;
    while (i >= 0 && arr[i] > num) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = num;
}

int main() {
    const int size = 10;
    int arr[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    cout << "Enter a number: ";
    int num;
    cin >> num;

    insertNumber(arr, size - 1, num);

    cout << "Updated array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}