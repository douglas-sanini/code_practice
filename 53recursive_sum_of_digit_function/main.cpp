#include <iostream>

using namespace std;

int sum_of_digits(int n) {
    // Write your code below this line
    
    if (n/10 == 0)
    {
        return n;
    }
    
    return n%10 + sum_of_digits(n/10);
    
    // Write your code above this line
}

int main()
{
    cout << sum_of_digits(1024) << endl;
    return 0;
}