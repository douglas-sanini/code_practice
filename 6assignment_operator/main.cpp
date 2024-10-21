#include <iostream>

using namespace std;

int main() {
    int num1 {10}; //this is initialization
    int num2 {20}; //happens when variable is declared and it receives a value the very first time


    //assignment is when you change a values that already exists in the variable
    //ASSIGNMENT OPERATOR IS THE "=" SIGN
    num1 = 100; //assignment example, we are moving 100 to this variable 
    //lhs = rhs, 100 is being stored in the *LOCATION* of num1 (IMPORTANT)

    cout << "num1 is " << num1 << endl; //as you can see we changed value of num1 from 10 to 100 
    cout << "num2 is " << num2 << endl; //using the assignment statement num1 = 100

    //we can also do 
    num1 = num2;

    cout << "\nnum1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;
    //as you can see num2 value was assigned to num1 MEMORY LOCATION
    //every time an assignment statement is executed, the comppiler type checks before running the code.
    
    
// In C++, the compilation process typically involves the following steps:

// Preprocessing: The preprocessor scans the source code for any preprocessor directives, such as #include statements, and replaces them with the appropriate code. 
// The preprocessor also performs macro expansion, which replaces any defined macros with their corresponding code.

// Compilation: The compiler then translates the preprocessed source code into assembly language, which is a low-level representation of the code that can be executed by a computer.

// Assembly: The assembler then converts the assembly code into machine code, which is a binary representation of the code that can be executed by the computer.

// Linking: Finally, the linker combines the machine code with any required libraries and generates an executable file that can be run on the target system.
    
    num1 = num2 = 1000;
    //it is assigned from right to left!

    cout << "\nnum1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;
    
    // num1 = "Douglas";
    // cout << "\nnum1 is " << num1 << endl;
    // cout << "num2 is " << num2 << endl;

    cout << endl;
    return 0;
}