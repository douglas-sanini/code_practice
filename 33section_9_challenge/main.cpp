// Section 9
// Challenge
/*    
    This challenge is about using a collection (list) of integers and allowing the user
    to select options from a menu to perform operations on the list.
    
    Your program should display a menu options to the user as follows:
    
    P - Print numbers
    A - Add a number
    M - Display mean of the numbers
    S - Display the smallest number
    L - Display the largest number
    Q - Quit

    Enter your choice:
    
The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
If an illegal choice is made, you should display, "Unknown selection, please try again" and the menu options should be
displayed again.


If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
If the list is empty you should display "[] - the list is empty"
If the list is not empty then all the list element should be displayed inside square brackets separated by a space. 
For example, [ 1 2 3 4 5 ]
      
If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list 
which you will add to the list and then display it was added. For example, if the user enters 5
You should display, "5 added".
Duplicate list entries are OK

If the user enters 'M' or 'm'  you should calculate the mean or average of the elements in the list and display it.
If the list is empty you should display, "Unable to calculate the mean - no data"

If the user enters 'S' or 's' you should display the smallest element in the list.
For example, if the list contains [2 4 5 1],  you should display, "The smallest number is 1"
If the list is empty you should display, "Unable to determine the smallest number - list is empty"

If the user enters 'L' or 'l' you should display the largest element in the list
For example, if the list contains [2 4 5 1], you should display, "The largest number is 5"
If the list is empty you should display, "Unable to determine the largest number - list is empty"

If the user enters 'Q' or 'q' then you should display 'Goodbye" and the program should terminate.

Before you begin. Write out the steps you need to take and decide in what order they should be done.
Think about what loops you should use as well as what you will use for your selection logic.

This exercise can be challenging! It may likely take a few attempts before you complete it -- that's OK!

Finally, be sure to test your program as you go and at the end.

Hint: Use a vector!

Additional functionality if you wish to extend this program.

- search for a number in the list and if found display the number of times it occurs in the list
- clearing out the list (make it empty again) (Hint: the vector class has a .clear() method)
- don't allow duplicate entries
- come up with your own ideas!

Good luck!

*/
#include <iostream>
#include <vector> 
using namespace std;

int main() {
    
    char operation_input{};
    vector <int> list;
    int vector_input{};
    float sum{};
    float mean{};
    int smallest{};
    int largest{};
    int search_number{};
    int counter{};
    
    do 
    {
    cout << "\nP - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "I - Search for a number" << endl;
    cout << "Q - Quit" << endl;
    
    
    cout << "\nEnter your choice: ";
    cin >> operation_input;

    switch (operation_input) 
        {
        case 'P':
        case 'p':
            cout << "\nYour list of numbers is: ";
            cout << "[ ";
            for (int i{0}; i < list.size(); i++)
                cout << list.at(i) << " ";
            cout << "]" << endl;
            break;


        case 'A':
        case 'a':
            cout << "\nInput your value to add to list here: ";
            cin >> vector_input; 
            list.push_back(vector_input);
            break;


        case 'M':
        case 'm':
            cout << "\nMean of list is: ";
            for (int i{0}; i < list.size(); i++)
                sum = sum + list.at(i);
            mean = sum/list.size();
            cout << mean << endl;
            break;


        case 'S': 
        case 's':
            cout << "\nYour smallest number is: ";
            smallest = list.at(0);
            for (int i{1}; i < list.size(); i++)
                {
                if (list.at(i) < smallest)
                    smallest = list.at(i);
                }
            cout << smallest << endl;
            break; 


        case 'L':
        case 'l':
            cout << "\nYour largest number is: "; 
            largest = list.at(0);
            for (int i{1}; i < list.size(); i++)
                {
                if (list.at(i) > largest)
                    largest = list.at(i);
                }
            cout << largest << endl;
            break;


        case 'I':
        case 'i':
            cout << "\nInput what number you would like to search for: ";
            cin >> search_number; 
            for (int i{}; i < list.size(); i++)
            {
                if (list.at(i) == search_number)
                    counter++;
            }    
            cout << "This number appears " << counter << " times in the list." << endl;   
            counter = 0;           
            break;


        case 'Q':
        case 'q': 
            cout << "\nGoodbye..." << endl;
            break;


        default:
            cout << "\nINVALID VALUE YOU DIPSHIT" << endl;
        }
    }
    while (operation_input !='q' && operation_input !='Q');
    
    cout << endl;
    return 0;
}
