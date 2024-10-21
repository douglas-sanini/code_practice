//function parameters 

#include <iostream> 
#include <string>
#include <vector>

using namespace std;

void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> v);
void print_vector(vector<string> v);

void pass_by_value1(int num) 
{
    num = 1000;
    cout << num << endl;
}

void pass_by_value2(string s) 
{
    s = "Changed";
    cout << s << endl;
}

void pass_by_value3(vector<string> v)
{
    v.clear(); //delete all vector elements
    for (auto s: v)
        cout << s << " ";
    cout << endl;
}

void print_vector(vector<string> v)
{
    for (auto s: v)
        cout << s << " ";
    cout << endl;
}

int main() 
{
    int num{10};
    int another_num{20};

    cout << "num before calling pass_by_value1: " << num << endl;
    cout << "num copy inside pass_by_value1: ";
    pass_by_value1(num);
    cout << "num after calling pass_by_value1: " << num << endl;
    //this happens because a copy of num is passed in to the function pass_by_value1() and that is why num continues being equal to 10 after calling the fucntion!

    cout << "\nanother_num before calling pass_by_value1: " << another_num << endl;
    cout << "num copy inside pass_by_value1: ";
    pass_by_value1(another_num);
    cout << "another_num_after calling pass_by_value1: " << another_num << endl;
    //same thing happens as the  previous case 

    string name {"Frank"};
    cout << "\nname before calling pass_by_value2: " << name << endl;
    cout << "name inside pass_by_value2: ";
    pass_by_value2(name);
    cout << "name after calling pass_by_value2: " << name << endl;
    //same case again, but this time using strings

    vector<string> stooges {"Larry", "Moe", "Curly"};
    cout << "\nstooges before calling pass_by_value3: ";
    print_vector(stooges);
    cout << "stooges inside pass_by_value3: ";
    pass_by_value3(stooges);
    cout << "stooges before calling pass_by_value3: ";
    print_vector(stooges);

    cout << endl;
    return 0;
}