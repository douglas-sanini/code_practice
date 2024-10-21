#include <iostream>

using namespace std;

int main()
{

    // for (;;) //creates a loop with no termination condition, continues to execute indefinitely until the loop is manually interrupted or terminated by using a break statement or other means.
    //     cout << "This will print forever" << endl; //infinite for loop

    // while (true) //infinite while loop
    //     cout << "This will print forever" << endl;
    //can also do:
    // while (12>10)
    //     cout << "Yo mama is fat" << endl;
    // cout << endl;

    // do //infinite do-while loops
    // {
    //     cout << "infinite dildo" << endl; 
    // }
    // while (10<34);


    //example
    while (true)
    {
        char again {};
        cout << "Do you want to loop again? (Y/N): ";
        cin >> again;

        if (again == 'N' || again == 'n')
            break;
    }
    //in best practice this loop should have more information on when it iterates 
    //but this is just an example for learning purposes
    return 0;
}