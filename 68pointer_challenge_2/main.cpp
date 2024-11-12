// Reverse a std::string using Pointers (Challenging!)
// Exercise: Reverse a std::string using Pointers

// Specification:

// Write a C++ function reverse_string that takes a std::string as input and returns a new std::string with the characters in reverse order. The function should use pointers to perform the reversal.

// Function Signature:

// std::string reverse_string(const std::string& str);
// Input:

// str: The input string.

// Output:

// The function should return a new string with the characters of str reversed.

// Example:

// std::string input = "Hello, World!";
// std::string reversed = reverse_string(input);
 
// reversed should be "!dlroW ,olleH"



#include <iostream>
#include <vector>
#include <string>

using namespace std;


string reverse_string(const string& str) {
    string reversed_str;

    // Pointer to the last character of the string
    const char* ptr = &str[str.size() - 1];
    cout << ptr << endl;
    cout << *ptr << endl;

    // Traverse the string in reverse order
    while (ptr >= &str[0]) {
        // Append each character to the new string
        reversed_str.push_back(*ptr);
        // cout << ptr << endl;
        // cout << *ptr << endl;

        // Move the pointer one step left
        --ptr;
    }

    return reversed_str;  // Return the reversed string
}



int main(){

    string greeting = "Hello, World!";

    string reversed;
    reversed = reverse_string(greeting); 
    cout << reversed << endl;
    return 0;
}