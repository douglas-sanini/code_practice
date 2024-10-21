#include <iostream> 
using std::cout , std::cin, std::endl;

int main() {
    char vowels[] {'a', 'e', 'i', 'o', 'u'};
    cout << "\nThe first vowel is: " << vowels[0] << endl;
    cout << "The last vowel is: " << vowels[4] << endl;

    //cin >> vowels[5]; // OUT OF BOUNDS - DON'T DO THIS - This crashes because vowels was defined earlier as an arrya of 5 values, and this line code is tryin to insert a sixth value.

    double hi_temps[] {90.1, 89.8, 77.5, 81.6};
    cout << "The first high temperature is: " << hi_temps[0] << endl;

    hi_temps[0] = 100.7; //set the first element in hi_temps to 100.7 

    cout << "The first high temperature is now: " << hi_temps[0] << endl;
    
    int test_scores[5]{100,90}; //this curly brace sets all values of the array to 0
//if you put values in the curly brace it will also set these into the array in the order that they written
    cout << "\nFirst score at index 0: " << test_scores[0] << endl; 
    cout << "Second score at index 1: " << test_scores[1] << endl; 
    cout << "Third score at index 2: " << test_scores[2] << endl; 
    cout << "Fourth score at index 3: " << test_scores[3] << endl; 
    cout << "Fifth score at index 4: " << test_scores[4] << endl; 


    cout << "\nNotice what the value of the name is: " << test_scores << endl; //will return a hexidecimal number, that number is the memory address (in other words, the storage location)
    //of the array. Name of the array is the location of the array
    //when using indexes for arrays, c++ sums the value of the address location by the index

    return 0;
}