#include <iostream> 
#include <vector>

using namespace std;

int main()
{
    vector <int> vec{2,4,6,8};
    int result{};
    int j{};
    
        for (int i = 0; i < vec.size(); ++i)
        {
            j = vec.size()-1;
            while (j!=i)
            {
                result = result + vec.at(i)*vec.at(j);
                --j;
            }
        }
               
    cout << result; 
    cout << endl;
    return 0;
}