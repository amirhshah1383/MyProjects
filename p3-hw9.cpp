#include <iostream>


using namespace std;

int main() {
    int n = 10; 
    int fibo[n]; 

    fibo[0] = 0; 
    fibo[1] = 1; 

    for (int i = 2; i < n; i++) {
        fibo[i] = fibo[i-1] + fibo[i-2]; 
    }

    cout << "The first ten numbers of the Fibonacci series:  " << endl;
    for (int i = 0; i < n; i++) {
        cout << fibo[i] << " ";  
    }
    
    return 0;
}
