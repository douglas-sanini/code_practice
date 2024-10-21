//letter pyramid challenge

#include <iostream>
#include <string>
using namespace std; 

int main()
{
    
    string letters_pyramid{};
    string left_to_right{};
    string right_to_left{};
    
    cout << "Provide letters for pyramid: ";
    cin >> letters_pyramid; 

    for (size_t i{0}; i < letters_pyramid.size(); i++)
    {
    
        for (size_t j{0}; j <= i; j++)
        {
            cout << letters_pyramid.at(j);
        }

        
        size_t l{0};
        if (i > 0)
        {
            for (size_t k{0}; k < i; k++)
            {
                cout << letters_pyramid.at(i - l);
                ++l;
            }
        }
        // for (size_t k{letters_pyramid.size()}; k > i; k--)
        // {
        //     cout << letters_pyramid.at(i + k);
        // }
        
        // right_to_left = "";
        cout << endl;
    
    }

    cout << endl;
    return 0;
}