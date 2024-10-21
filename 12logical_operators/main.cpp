//logical operators 

// notation
// not: !
// and: &&
// or: ||

//uses short circuit evaluation, this means that when evaluating a logical expression c++ stops as soon as the result is known.
//for example: expr1 && expr2 && expr3, if the first expression is already false then it is irrelevant if the rest of the expressions are true, therefore c++ moves on and doesnt evaluate the rest of the expressions 

#include <iostream> 

using namespace std;

int main () {

    int num{};
    const int lower{10};
    const int upper{20};

    cout << boolalpha;

    //Determine if an entered integer is between two other integers
    //assume lower < upper
    cout << "Enter an integer - the bounds are " << lower << " and " << upper << ":";
    cin >> num; 

    bool within_bounds {false};

    within_bounds = (num > lower && num < upper);
    cout << num << " is between " << lower << " and " << upper << ": " << within_bounds << endl;


    //Determine if an entered integer is outside two other integers
    //assume lower < upper
    cout << "\nEnter an integer - the bounds are " << lower << " and " << upper << ":";
    cin >> num; 

    bool outside_bounds {false};

    outside_bounds = (num < lower || num > upper);
    cout << num << " is outside " << lower << " and " << upper << ": " << outside_bounds << endl;


    //Determine if an entered integer is exactly on the boundary 
    //assume lower < upper
    cout << "\nEnter an integer - the bounds are " << lower << " and " << upper << ":";
    cin >> num; 

    bool on_bounds {false};

    on_bounds = (num == lower || num == upper);
    cout << num << " is on one fo the bounds which are " << lower << " and " << upper << ": " << on_bounds << endl;



    //Determine if you need to wear a coat based on temperature and wind speed
    bool wear_coat{false};
    double temperature{};
    int wind_speed{};

    const int wind_speed_for_coat {25};     //wind over this value requires a coat
    const double temperature_for_coat {45}; //temperature below this value requires a coat

    //Require a coat if either windspeed is too high OR temperature is too low
    cout << "\nEnter the current temperature in (F): ";
    cin >> temperature;
    cout <<  "Enter windspeed in (mph): ";
    cin >> wind_speed; 

    wear_coat = (temperature < temperature_for_coat || wind_speed > wind_speed_for_coat);
    cout << "Do you need to wear a coat using OR? " << wear_coat << endl;

    //Require a coat if BOTH the windspeed AND temperature is too low
    wear_coat = (temperature < temperature_for_coat && wind_speed > wind_speed_for_coat);
    cout << "Do you need to wear a coat using AND? " << wear_coat << endl;

    cout << endl;
    return 0; 





}