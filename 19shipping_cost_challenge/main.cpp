/*

Shipping challenge

Ask the user for package dimension in inches 
length, width, height - these should be integers

All dimension must be 10 inches or less or we cannot ship it 

Base cost $2.50
If package volume is greater than 100 cubic inches there is a 10% surcharge 
If package volume is greater than 500 cubic inches there is a 25% surcharge 

*/

#include <iostream> 
#include <iomanip> 
//has stuff that let me define doubles' precision
using namespace std;

int main() 
{

    double length{0}, width{0}, height{0}, volume{0}, shipping_cost{0};
    const double base_cost{2.5};

    cout << "You will be providing length, width and height values in inches and respectively in that order with spaces in between each one. All values must be 10 inches or lower. Please provide the values now:" << endl;
    cin >> length >> width >> height; 

    if (length <= 10 && width <= 10 && height <= 10)
    {
        volume = length * width * height;

        if (volume > 500)
        {
            shipping_cost = base_cost * 1.25;
            cout << "Package volume: " << volume << " cubic inches" << endl;
            cout << "This is greater than 500 cubic inches, therefore you will be charged a 25% surcharge." << endl;
            cout << "Total shipping cost: $" << shipping_cost << endl;
        }
        else if (volume > 100)
        {
            shipping_cost = base_cost * 1.1;
            cout << "Package volume: " << volume << " cubic inches" << endl;
            cout << "This is greater than 100 cubic inches, therefore you will be charged a 10% surcharge." << endl;
            cout << "Total shipping cost: $" << shipping_cost << endl;
        }
        else
        {
            shipping_cost = base_cost;
            cout << "Package volume: " << volume << " cubic inches" << endl;
            cout << "This is lower than 100 cubic inches, therefore you will NOT be charged any surcharges." << endl;
            cout << fixed << setprecision(2); // sets precision for doubles on the second decimal value making printing dollars nicely
            //  NOT WORKING, SEE LATER
            cout << "Total shipping cost: $" << shipping_cost << endl;
        }    
    }
    else 
        cout << "Dimension/s are over the 10 in limit!" << endl;
    

    cout << endl;
    return 0;
}