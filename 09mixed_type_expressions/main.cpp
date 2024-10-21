//Mixed type expressions

//c++ operations occur on same type operands. If they are of different types, c++ will atempt to convert one. 
//If it can't, a compiler error will occur

//types of coercion: conversion of one operand to another data type
// - promotion: conversion to a higher type, used in mathematical expressions 
// - demotion: conversion to a lower type, used with assignment to lower type


#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num1{2};
    float num2{5.2};

    //lower type is promoted to higher type 
    cout << num1 * num2 << endl;
    //num1 (2) is promoted to 2.0 (during calculation of multiplication only)
    cout << num1 << endl;

    //higer types is demoted to lower type
    int num{0};
    num = 100.2;
    //num (100.1) is demoted to 100
    cout << endl << num << endl;


//explicit type casting - static_cast<type>
int total_amount {100};
int total_number {8};
double average {0.0};

average = total_amount / total_number;
cout << endl;
cout << average << endl; //displays 12 

//static_cast<type>(variable) - type conversion between compatible types at complie-time. Used to convert onde data type to another data type.
average = static_cast<double>(total_amount) / total_number;
cout << endl;
cout << average << endl; //displays 12.5 



//lesson exercise
/*
    Ask the user to enter 3 integers 
    Calculate the sum of the integers then 
    calculate the average of the 3 integers.
    
    Display the 3 integers entered, 
    the sum of the 3 integers and 
    the average of the 3 integers
    */
    
   
    int nu1{}, nu2 {}, nu3{};
    int total{};
    const int count {3};
   

    cout << "\nHello! Please provide 3 integers: " << endl;
    cin >> nu1 >> nu2 >> nu3;

    total = nu1 + nu2 + nu3; 

    double mean{0.0};

    mean = static_cast<double>(total)/count; //static_cast in this case will convert total into a double in order for our result of the mean to be correctly showing decimal values when needed.
    // mean = (double)total/count; //we can also use this old notation, however this only converts the value. static_cast double checks that it can convert to a different type before actually doing it.

    // The first line uses the C++ static_cast<> operator to perform the cast from total to double. This operator is a type-safe and recommended way to perform casting in C++, 
    // as it performs compile-time checking of the types involved and ensures that the conversion is valid.

    // The second line uses a C-style cast, (double), to cast total to a double. C-style casts are less safe than static_cast<> and can lead to unexpected behavior if used incorrectly. 
    // They perform a conversion that can include multiple casting operations (such as const_cast, reinterpret_cast, and static_cast) in a single expression, making it harder to read and understand.


    cout << "\nThe 3 numbers were: " << nu1 << "," << nu2 << "," << nu3 << endl;
   

    
    cout << "\nThe sum of the numbers is: " << total << endl;
    cout << "\nThe average of the numbers is: " << mean << endl;

    cout << endl;
    return 0;
}