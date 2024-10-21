#include <iostream>


using namespace std;

int main()
{

    /*********************************
     Character type 
    **********************************/
    
    char middle_initial {'D'}; //Notice the single quotes around the character
    cout << "My middle initial is " << middle_initial << endl; 

    /*********************************
     Integer type 
    **********************************/
    unsigned short int exam_score {55}; // same as unsigned short exam_score
    cout << "My exam score was " << exam_score << endl;

    unsigned short int countries_represented {65};
    cout << "There were " << countries_represented << " countries represented in my meeting" << endl;

    int people_in_florida {20610000};
    cout << "There are about " << people_in_florida << " people in Florida" << endl; 

    long int people_on_earth = {7'600'000'000};
    cout << "There are about " << people_on_earth << " people on earth" << endl; 

    long int distance_to_alpha_centauri {9'461'000'000'000};
    cout << "The distance to aplha centauri is " << distance_to_alpha_centauri << " kilometers" << endl;
    
    /*********************************
     Floating point types 
    **********************************/

    float pi{3.14159};
    cout << "Pi is " << pi << endl;

    double large_amount {2.7e120};
    cout << large_amount << " is a very big number" << endl; 

    /*********************************
     Boolean type 
    **********************************/

    bool game_over {false};
    cout << "The value of gameOver is " << game_over << endl;

    /*********************************
     Overflow example
    **********************************/

    short value1 {30000};
    short value2 {1000};
    short product{value1*value2}; /* since this will be larger than "short int" we won't get the correct result and
    we also won't get an error. However our compiler will try to show where the problem is as we can see where it 
    is underlined in yellow */

    cout << "The product of " << value1 << " and " << value2 << " is " << product << endl;
   
    return 0; 
}