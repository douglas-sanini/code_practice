//function overloading
#include <iostream>
#include <vector>
#include <string>
using namespace std;


void print(int);
void print (double);
void print(string);
void print(string, string);
void print(vector<string>);

void print(int num)
{
    cout << "Printing int: " << num <<endl;
}

void print(double num)
{
    cout << "Printing double: " << num <<  endl;
}

void print(string s)
{
    cout << "Printing string: " << s << endl;
}

void print(string s, string t)
{
    cout << "Printing 2 strings: " << s << " and " << t << endl;
}

void print(vector<string> v)
{
    cout << "Printing vector of strings: " << endl;
    for (auto s: v)
        cout << s + " ";
    cout << endl;
}


int main() 
{
    print(100);                 //int 
    print('A');                 //character always promoted to int, therefore should print 65 ASCII ('A')
    print(123.5);               //double
    print(123.5F);              //float is promoted to double as there are no functions expecting a float. C++ automatically promotes floats to doubles when needed for some operations
    print("C-style string");    //c-style string is converted to a c++ string.

    string s{"C++ string"};
    print(s);                   //c++ string because strcpy was not used to create s 

    print("C-style string", s); //first argument is converted to c++ string

    vector<string> three_stooges{"Larry", "Moe", "Curly"}; 
    print(three_stooges);

    cout << endl;
    return 0;
}