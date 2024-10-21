//default arguments
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double calc_cost(double base_cost, double tax_rate =0.6, double shipping = 3.50);

void greeting(string normal, string prefix = "Mr.", string suffix = "");

double calc_cost(double base_cost, double tax_rate, double shipping)
{
    return base_cost += (base_cost*tax_rate) + shipping;
}

void greeting(string name, string prefix, string suffix)
{
    cout << "Hello " << prefix + " " + name + " " + suffix << endl; 
}

int main()
{
    double cost{ 0 };
    cost = calc_cost(100.0, 0.08, 4.25);   //no defaults    
    
    cout << fixed << setprecision(2);
    cout << "Cost is: " << cost << endl;

    cost = calc_cost(100.0, 0.08);      //shipping as default
    cout << "Cost is: " << cost << endl;

    cost = calc_cost(200.0);              //tax rate and shipping as default
    cout << "Cost is: " << cost << endl;  

    greeting("Glenn Jones", "Dr.", "M.D");
    greeting ("James Rogers", "Professor", "Ph.D");
    greeting("Frank Miller", "Dr."); 
    greeting("William Smith");
    greeting("Mary Howard", "Mrs.", "PhD");
    cout << endl;
    return 0;
}

//fixed is an I/O manipulator that is used to set the std::ios_base::fixed flag for the cout stream. 
//This flag ensures that floating-point numbers are displayed in fixed-point notation, meaning they have a fixed number of digits after the decimal point.
//setprecision(2) is another I/O manipulator that sets the precision of floating-point numbers to 2 digits after the decimal point. 
//This means that any subsequent floating-point numbers output using cout will be rounded to two decimal places.