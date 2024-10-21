#include <iostream>
#include <vector>
using namespace std;

int main()
{


    vector<int> vec{1,2,3,4,5,6,7,1,11,10};

    int i{0}; 
    int count{0};

    while (i < vec.size() && vec.at(i) != -99 )
    {
        ++count;
        ++i;
    }
    cout << count;


    cout << endl;
    return 0;
}