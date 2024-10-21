//ternary operator

#include <iostream> 

using namespace std;

int main() 
{

    int num{};

    cout << "Enter an integer: ";
    cin >> num;

    if (num % 2 == 0)
        cout << num << " is even" << endl;
    else 
        cout << num  << " is odd" << endl; 
    
    cout << num << " is " << ((num % 2 == 0 ) ? "even":"odd") << endl; //ternary operator - similar to if/else statement, but it is used within code like the operator +/-. it is concise, effiecient to write and easy to read

    int num1{},num2{};

    cout << "Enter two integers separated by a space: ";
    cin >> num1 >> num2;

    if (num1 != num2) 
    {
        cout << "Largest: " << ((num1 > num2) ? num1:num2) << endl;
        cout << "Smallest: " << ((num1 < num2) ? num1:num2) << endl;
    }
    else
    {
        cout << "The numbers are the same" << endl;
    } 
    

    cout << endl;
    return 0;

}