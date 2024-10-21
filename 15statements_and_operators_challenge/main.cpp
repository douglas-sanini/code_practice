// Section 8 Challenge
/*
	For this program I will be using US dollars and cents.
	
    Write a program that asks the user to enter the following:
	An integer representing the number of cents 
    	
	You may assume that the number of cents entered is greater than or equal to zero
    
	The program should then display how to provide that change to the user.
	
	In the US:
		1 dollar is 100 cents
		1 quarter is 25 cents
		1 dime is 10 cents
		1 nickel is 5 cents, and
		1 penny is 1 cent.
		
	Here is a sample run:
	
	Enter an amount in cents :  92
	
	You can provide this change as follows:
	dollars    : 0
	quarters : 3
	dimes     : 1
	nickels   : 1
	pennies  : 2
	
	Feel free to use your own currency system.
	Also, think of how you might solve the problem using the modulo operator.

	Have fun and test your program!!

*/
#include <iostream>

using namespace std;

int main() {


    int dollars{0}, quarters{0}, dimes{0}, nickels{0}, pennies{0}, cents{0};

    int a{50}, b{100};
    cout << a/b << endl;
    cout << a % 100 << endl;


    cout << "Please provide an integer that represents the number of cents that you have: ";
    cin >> cents;

    dollars = cents/100;
    cents = cents % 100;

    quarters = cents/25;
    cents = cents % 25;

    dimes = cents/10;
    cents = cents % 10;

    nickels = cents/5;
    cents = cents % 5;

    pennies = cents; 

    cout << "You're change is: " << endl;
    cout << dollars << " dollars" << endl;
    cout << quarters << " quarters" << endl;
    cout << dimes << " dimes" << endl;
    cout << nickels << " nickels" << endl;
    cout << pennies << " pennies" << endl;

    cout << endl;
    return 0;
}

