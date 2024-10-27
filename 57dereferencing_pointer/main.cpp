#include <iostream>
#include <string>
#include <vector> 

using namespace std;

int main() {

    int score {100};
    int *score_ptr {&score};

    // *score_ptr: this is what dereferencing a pointer is
    //"follow" the pointer to where its point which is memory address stored within the pointer
    cout << *score_ptr << endl; //100

    //"follows" to the memory address and stores new value there which is 200
    *score_ptr = 200;

    cout << *score_ptr << endl; //200
    cout << score << endl;      // 200

    cout << " \n-------------------------" << endl;
    double high_temp{100.7};
    double low_temp{37.4};
    double *temp_ptr{&high_temp};

    cout << *temp_ptr << endl; //100.7
    //changing where the pointer is pointing to. which is the address of low_temp
    temp_ptr = &low_temp;
    cout << *temp_ptr << endl; //37.4



    cout << " \n-------------------------" << endl; 
    string name{"Frank"};
    string *string_ptr{&name};

    cout << *string_ptr << endl; //Frank
    name = "James";
    cout << *string_ptr << endl; //James

    cout << " \n-------------------------" << endl; 
    vector<string> stooges{"Larry", "Moe", "Curly"};
    vector<string> *vector_ptr{nullptr};

    vector_ptr = &stooges;

    cout << "First stooge:" << (*vector_ptr).at(0) << endl; //Larry
    cout << stooges.at(0) << endl;
    // cout << (*vector_ptr) << endl;
    // cout << stooges << endl;

    cout << "Stooges: ";
    for (auto stooge: *vector_ptr)
        cout << stooge << ", ";
    cout << endl;
}