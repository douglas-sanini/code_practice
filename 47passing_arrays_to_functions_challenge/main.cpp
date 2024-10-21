#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

//prototypes
void print_guest_list(const string guest_list[], size_t guest_list_size); 
void clear_guest_list(string guest_list[], size_t guest_list_size);


//function definitions
void print_guest_list(const string guest_list[], size_t guest_list_size)
{
    for (size_t i{0}; i < guest_list_size; i++)
        cout << guest_list[i] << endl;
}


void clear_guest_list(string guest_list[], size_t guest_list_size)
{
    for (size_t i{0}; i < guest_list_size; ++i)
        guest_list[i] = " ";
}

  

int main()
{
    string guest_list[] {"Larry", "Moe", "Curly"};
    size_t guest_list_size {3};

    print_guest_list(guest_list, guest_list_size);
    clear_guest_list(guest_list, guest_list_size);
    cout << "hi";
    print_guest_list(guest_list, guest_list_size);
    cout << "hi";
}   