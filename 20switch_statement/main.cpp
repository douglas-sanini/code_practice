//switch_statement

/*ADVANTAGES OF THE SWITCH STATEMENT
Code readability: The switch statement allows you to write code that is more readable and understandable than using multiple if-else statements, especially when dealing with multiple conditions or cases.

Simplicity: It simplifies the code structure by grouping related cases together, making it easier to understand and maintain. This can lead to cleaner and more efficient code.

Efficiency: The switch statement is generally more efficient than using multiple if-else statements when dealing with a large number of conditions. It uses jump tables or binary searches (depending on the implementation) to quickly determine which case to execute, resulting in faster execution times.

Code organization: With a switch statement, you can organize your code logically by grouping related cases together. This makes it easier to add or modify cases in the future, enhancing code maintainability.

Expressiveness: The switch statement provides a concise and expressive way to handle multiple cases based on a single expression or variable. It allows you to clearly define the different possible outcomes in a compact manner.

Fall-through behavior: In C++, you can intentionally omit the break statement after a case to achieve a fall-through behavior, where the execution flows to the next case without terminating the switch block. This can be useful in certain scenarios where you want to execute multiple cases that share the same code logic.*/

#include <iostream>

using namespace std;

int main() 
{

    char letter_grade {};

    cout << "Enter the letter grade you expect on the exam: ";
    cin >> letter_grade;

    switch (letter_grade) 
    {
        case 'a':
        case 'A':
            cout << "You need a 90 or above, study hard!" << endl;
            break; //break statement is used to either exit a loop or a switch statement in c++ 
        case 'b':
        case 'B':
            cout << "You need a 80-89, go study!" << endl;
            break;
        case 'c':
        case 'C':
            cout << "You need a 70-79 for an average grade." << endl;
            break;
        case 'd':
        case 'D':
            cout << "All you need is 60-69 to just pass!" << endl;
            break;
        case 'f':
        case 'F':
        {
            char confirm{};
            cout << "Are you sure (Y/N)?";
            cin >> confirm;
            if (confirm == 'y' || confirm == 'Y')
                cout << "That's okay, you can always try again next time!" << endl;
            else if (confirm == 'n' || confirm == 'N')
                cout << "Alright! You should probably get studying then!";
            else
                cout << "Invalid response" << endl;
            break;
        }
        
        default:
            cout << "Sorry, not a valid grade." << endl;
    }

    cout << endl;
    return 0;
}
