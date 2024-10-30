#include <iostream>
#include <string>

using namespace std;

int main()
{
    //youtube video test
    // int value = 5;
    
    // int* hvalue = new int;
    // *hvalue = 5;
    
    int* int_ptr{nullptr} ;
    int_ptr = new int;
    cout << int_ptr << endl;
    delete int_ptr;

    size_t size{0};
    double* temp_ptr{nullptr};

    cout << "How many temps? ";
    cin >> size;

    
    temp_ptr = new double[size];

    cout << temp_ptr << endl;

    delete []temp_ptr;



    cout << endl;
    return 0;



}   

