#include <iostream>

using namespace std;

double a_penny_doubled_everyday(int n)
    // Write your code below this line

{
    if (n == 1)
    {
        return 0.01;
    }
    return 2*a_penny_doubled_everyday(n-1);
}
    
    // Write your code above this line

int main()
{
    cout << a_penny_doubled_everyday(4) << endl;
    return 0;
}



