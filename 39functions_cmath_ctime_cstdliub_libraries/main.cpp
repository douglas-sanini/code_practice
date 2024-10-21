#include <iostream> 
#include <cmath>
#include <cstdlib> //required for rand()
#include <ctime>   //required for time()

using namespace std; 

int main()
{

////working with cmath library
    double num;

    cout << "Enter a number (double): ";
    cin >> num;

    cout << "The sqrt of " << " is: " << sqrt(num) << endl;
    cout << "The cubed root of " << num << " is: " << cbrt(num) << endl;

    cout << "The sine of " << num  << " is: " << sin(num) << endl;
    cout << "The cosine of " << num << " is: " << cos(num) << endl;

    cout << "The ceil of " << num << " is: " << ceil(num) << endl;
    cout << "The floor of " << num << " is: " << floor(num) << endl;
    cout << "The round of " << num << " is: " << round(num) << endl;

    double power{};
    cout << "\nEnter a power to raise " << num << " to: ";
    cin >>  power;

    cout << num << " raised to the " << power << " power is: " << pow(num, power) << endl;



////random and time functions
    int random_number{};
    size_t count{10};   //number of random numbers to generate
    int min{1};         //lower bound (inclusive)
    int max{6};         //upper bound (inclusive)

    //seed the random number generator
    //if you don't seed the generator you will get the same requence random numbers every run

    cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
    srand(time(nullptr)); 
    //For every different seed value used in a call to srand, the pseudo-random number generator can be expected to generate a different succession of results in the subsequent calls to rand.
    //Two different initializations with the same seed will generate the same succession of results in subsequent calls to rand.
    //By seeding the random number generator with the current time, each program execution will produce a different sequence of random numbers.

    for (size_t i(1); i<=count; ++i)
    {
        random_number = rand() % max + min;    //generate a random number [min,max]
        cout << random_number << endl; 
    }

    cout << endl;
    return 0;
}