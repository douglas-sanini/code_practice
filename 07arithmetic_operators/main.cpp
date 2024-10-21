//some quick notes on arithmetica operators (some things to be aware of that I didn't know or remember)

#include <iostream>

using namespace std; 

int main(){

    double num1{200};
    double num2{100}; 
    double num3{};

    num3 = num1*num2;

    cout << "num3 = " << num3 << endl; 

    num3 = num2/num1; //remeber to include double or float type in num3, num2 and/or num1 to get the result with decimal values

    cout << "num3 = " << num3 << endl; 

    

    //CHALLENGE!!! 
    //convert euros to dollar (pft, simple stuff)

    const double usd_per_eur{1.19};

    cout << "\nWelcome to the EUR to USD converter" << endl;
    cout << "Enter the vlaue in EUR: ";

    double euros{0.0};
    double dollars{0.0};
    
    cin >> euros;
    dollars = euros*usd_per_eur;

    cout << euros << " euros is equivalent to " << dollars << " dollars." << endl;
    
    cout << endl;

    return 0;

}