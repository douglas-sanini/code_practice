//Costants

/*
Frank's Carpet Cleaning Service
Charges $30 per room 
Sales tax rate is 6%
Estimates are valid for 30 days 

Prompt the user for the number of rooms they would like cleaned 
and provide an estimate such as:

Estimate for carpet cleaning service:
Number of rooms: 2
Price per room: $30
Tax: $3.6
=================================================
Total estimate:$ 63.6
This estimate is valid for 30 days

Pseudocode:
    Prompt the user to enter the number of rooms
    Display number of rooms 
    Display price per room 

    Display cost: (number of rooms * price per room)
    Display tax number of rooms * price per room * tax rate
    Display total estimate: (number of rooms * price per room) +(number of rooms * price per room * tax rate)
    Display estimate expiration time
*/

#include <iostream> 
using std::cout , std::cin, std::endl;

int main() {

    int number_of_large_rooms;
    int number_of_small_rooms;

    const double price_per_small_room {30.00}; //const will maintain the variable in this defined value and any attempt of change of value further down the code will result in a compiler error.
    const double price_per_large_room {40.00};
    const double tax {0.06};

    const int estimate_expiry {30}; //days


    cout << "Hello, welcome to Douglas' Carpet Cleaning Service! \nWe provide services for large and small rooms. \nKindly respond the following questions so that we can understand your cleaning needs \nand so that we can automatically provide pricing information to you." << endl;
    
    cout << "\nHow many large rooms do you need cleaned: ";
    cin >> number_of_large_rooms;

    cout << "\nHow many small rooms do you need cleaned: ";
    cin >> number_of_small_rooms;
    
    cout << "\n-- Thank you! Below you will find info regarding pricing for the requested service -- " << endl;

    cout << "\nNumber of large rooms: " << number_of_large_rooms << endl;
    cout << "Number of small rooms: " << number_of_small_rooms << endl;

    cout << "\nPrice per large room: $" << price_per_large_room << endl;
    cout << "Price per small room: $" << price_per_small_room << endl;
    
    //double cost_no_tax {}
    cout << "\nCost (without taxes): $" << (number_of_large_rooms * price_per_large_room) + (number_of_small_rooms * price_per_small_room) << endl;
    cout << "Taxes: $" << ((price_per_large_room * number_of_large_rooms) + (price_per_small_room * number_of_small_rooms)) * tax << endl;

    cout << "=====================================================" << endl;

    cout << "Total estimate: $" << (number_of_large_rooms * price_per_large_room) + (number_of_small_rooms * price_per_small_room) + ((price_per_large_room * number_of_large_rooms) + (price_per_small_room * number_of_small_rooms)) * tax  << endl; 
    cout << "This estimate is valid for "<< estimate_expiry <<" days." << endl;
    
    cout << endl;
    return 0;

}

