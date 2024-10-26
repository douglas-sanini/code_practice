#include <iostream>

using namespace std;

// Function prototype for fibonacci
unsigned long long fibonacci(unsigned long long n); // declaration is needed since fibonacci function definition is only after the main function
// in the case where the fibonacci function definition is before the main function, then the code would execute with no error while not having the fibonacci function declaration 
int main() {
    // Call the fibonacci function
    cout << "Fibonacci of 5: " << fibonacci(5) << endl;  // Should output 5
    cout << "Fibonacci of 10: " << fibonacci(10) << endl; // Should output 55
    return 0;
}

// Function definition for fibonacci
unsigned long long fibonacci(unsigned long long n) {
    if (n <= 1)
        return n;   // Base cases
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursion 
}
