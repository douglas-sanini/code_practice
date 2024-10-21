//passing arrays to functions 
#include <iostream>

using namespace std;

void print_array(const int arr[], size_t size);
void set_array(int arr[], size_t size, int value); 
//having to always define the size of arrays when passing them through functions
//remember that if you add const to function definition, you have to also add it to the function prototype

//just print array elements with space between them
void print_array(const int arr[], size_t size)//by adding const this does not allow me to make alterations of the array from within this fucntion (see example below:)
{
    for (size_t i{0}; i < size; ++i)    
        cout << arr[i] << " ";
    cout << endl;
    //arr[0] = 5000; // this isn't allowed - retrieves error assignment of read-only location '*arr' 
}

//set each array element to one single value
void set_array(int arr[], size_t size, int value)
{
    for (size_t i{0}; i < size; ++i)
        arr[i] = value;
}

int main() 
{
    int my_scores[]{100, 98, 90, 86, 84};

    print_array(my_scores, 5);
    print_array(my_scores, 5);
    set_array(my_scores, 5, 100);
    print_array(my_scores, 5);
    print_array(my_scores, 5);
    cout << endl; 
    return 0;

} 
