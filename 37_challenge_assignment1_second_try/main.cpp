//letter pyramid challenge

#include <iostream>
#include <string>
using namespace std; 

int main()
{
    
    string letters{};
    cout << "Provide letters: ";
    cin >> letters;
    string left{};
    string right{};
    string left_n_right{};

    //reverse counter used to add and remove the empty spaces to make output symetrical

    size_t number_of_spaces{letters.size()-1};

    //loops through input letters
    for (size_t i{0}; i < letters.size(); ++i)
    {
        //creating left side (and also middle) of pyramid
        left = left + letters.at(i);

        //creating spaces to add in left side to maintain the pyramid symmertical. 
        //Remember that the number_of_spaces is always the size (letters.size() - 1), in other words, one less than the length of the input letters
        std::string spaces(number_of_spaces, ' ');

        //adding the spaces to left for symmetry
        left = spaces + left;

        //since middle section of pyramid is already implemented in left, we start creating right side after i = 0
        if (i>0)
        {
            //always adds the value that is to left of of the middle section of the pyramid to right, therefore garanteeing symmetry
            right = left.substr(left.size() - 2, 1) + right;  
        }

        //join together left and right to form the current line of the pyramid
        left_n_right = left + right; 
        cout << left_n_right << endl;

        //this removes the empty spaces from left to restart with only letters in the start of the loop again
        left.erase(0,number_of_spaces);
        //as each line of the pyramid gets on letter longer on the left side, we can remove once space to maintain the symmetry
        --number_of_spaces;         
        
    }
    
    cout << endl;
    return 0;
}