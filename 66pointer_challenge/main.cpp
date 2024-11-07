// Reverse an Array using Pointers (Challenging!)
// Exercise: Array Reversal using Pointers

// Specification:

// Write a C++ function reverse_array that takes an integer array and its size as input and reverses the order of the elements in the array. The function should modify the array in-place.

// Function Signature:

// void reverse_array(int* arr, int size);
// Input:

// arr: A pointer to the first element of the integer array.

// size: The size of the array.

// Output:

// The function should modify the array in-place, reversing the order of the elements. You should NOT make a copy of the original array.

// Example:

// int arr[] = {1, 2, 3, 4, 5};
// int size = sizeof(arr) / sizeof(arr[0]);
 
// reverse_array(arr, size);
 
// // After the function call, the array should be reversed:
// // arr[] = {5, 4, 3, 2, 1}
// Constraints:

// The array will always have at least one element.

// You must perform the reversal in-place, without allocating extra memory.



#include <iostream>
#include <vector>
#include <string>

using namespace std;

int* create_array(size_t size, int init_value = 0) {
    int* new_storage{nullptr};
    new_storage = new int[size];
    for (size_t i{0}; i < size; ++i)
        *(new_storage + i) = init_value+i;
    return new_storage;
}


void display(const int* const array, size_t size) {
    for (size_t i{0}; i < size; ++i)
        cout << array[i] << " ";
    cout << endl;
}

void reverse_array(int* arr, int size) {
    for (int i{0}; i < size/2; ++i){

        int left_ele{arr[i]}; 
        int right_ele{arr[size-i-1]};
        
        arr[size-i-1] = left_ele;
        arr[i] = right_ele;
        
    }
    // for (int i{0}; i < size; ++i){
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
}

int main(){

    int *my_array {nullptr};
    size_t size;
    int init_value {};

    cout << "\nHow many integers would you like to allocate? ";
    cin >> size;
    cout << "What value would you like them initialized to? ";
    cin >> init_value;

    my_array = create_array(size, init_value);
    cout << " \n-------------------------" << endl;

    display(my_array, size);
    cout << " \n-------------------------" << endl;
    reverse_array(my_array, size);
    display(my_array, size);
    delete [] my_array;
    return 0;
}