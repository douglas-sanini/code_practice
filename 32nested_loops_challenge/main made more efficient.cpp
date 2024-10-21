#include <iostream> 
#include <vector>

using namespace std;

int main()
{
    vector <int> vec{2};
    int result{};
    
    for (int i = 0; i < vec.size(); ++i)
        for (int j = i +1; j < vec.size(); ++j)
            result = result + vec.at(i)*vec.at(j);
                   
    cout << result; 
    cout << endl;
    return 0;
}