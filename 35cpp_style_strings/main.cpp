#include <iostream> 
#include <iomanip> //manipulator for iostream
#include <string> //important!

using namespace std; //or use std::

int main() 
{

    string s0;
    string s1 {"Apple"};
    string s2 {"Banna"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1}; //Apple
    string s6 {s1, 0, 3}; //App
    string s7 (10,'X'); //XXXXXXXXXX

    cout << s0 << endl; //no garbage 
    cout << s0.length()<< endl; //empty string
    

    cout << "\nInitialization" << "\n----------------------------------------" << endl; 
    cout << "s1 is initialized to: " << s1 << endl;
    cout << "s2 is initialized to: " << s2 << endl;
    cout << "s3 is initialized to: " << s3 << endl;
    cout << "s4 is initialized to: " << s4 << endl;
    cout << "s5 is initialized to: " << s5 << endl;
    cout << "s6 is initialized to: " << s6 << endl;
    cout << "s7 is initialized to: " << s7 << endl;
    cout << s0 << endl;
        



    //Comparison
    cout << "\nComparison" << "\n------------------------------------" << endl;
    cout << boolalpha;
    cout << s1 << "==" << s5 << ":" << (s1 == s5) << endl; 
    cout << s4 << ">" << s5 << ":" << (s4 > s5) << endl; //ascii lowercase characters are represented by larger integers


    s3 = "Frank";
    cout << "s3 is now: " << s3 << endl; 

    s3[0] = 'C';
    cout << "s3 change first letter to 'C': " << s3  << endl;

    s3.at(0) = 'P'; 
    cout << "s3 change first letter to 'P': " << s3 << endl; 


    //concatenation 
    s3 = "Watermelon"; 
    cout << "\nConcatenation"<< "\n------------------------------" << endl;

    s3 = s5 + " and " + s2 + " juice"; 
    cout << "s3 is now: " << s3 << endl; 

    s3 = "nice cold " + s5 + " juice"; 

    // cant do 
    //s3 = "nice " << " cold " + s5 + " juice"
    // using "+" operator on two cstyle strings at the same time  which would be "nice" and "cold"
    //however code above is one way to fix this very specific occasion


    s1 = "Apple"; 
    for (size_t i{0}; i < s1.length(); ++i)
        cout << s1.at(i) << endl;
    cout << endl; 


    //ranged-base for loop 
    for (char c: s1)
        cout << c << endl; 



    //substring 
    cout << "\nSubstring" << "\n------------------------------------------" << endl;
    s1 = "This is a test";
    cout << s1 << endl;
    cout << s1.substr(0,4) << endl;
    cout << s1.substr(10,4) << endl;


    //erase 
    cout << "\nErase" << "\n------------------------------------------------"<< endl;
    cout << s1 << endl;
    s1.erase(0,5);
    cout << "s1 is now: " << s1 << endl; 

    //getline 

    cout << "\ngetline" << "\n-----------------------------------------------" << endl;
    
    string full_name {};

    // cout << "Enter your full name: ";
    // getline(cin, full_name);

    // cout << "Your full name is: " << full_name << endl;


    //find
    cout << "\nfind"<< "\n-----------------------------------------------------" << endl;

    s1 = "The secret word is Boo";
    string word {};

    cout << "Enter the word you would like to find: "; 
    cin >> word; 

    size_t position = s1.find(word);
    cout << position << endl; 
    cout << string::npos << endl;
    if (position != string::npos)
        cout << "Found " << word << " at position: " << position << endl; 
    else 
        cout << "Sorry, " << word << " not found" << endl; 
        
    string unformatted_full_name {"StephenHawking"};
    
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR CODE BELOW THIS LINE----
    string journal_entry_1 {"Isaac Newton"};
    string journal_entry_2 {"Leibniz"};
    
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR CODE BELOW THIS LINE----
    journal_entry_1.erase(0,6);
    // cout << journal_entry_1 << endl;


    // cout << journal_entry_1.at(0) << endl;
    // cout << journal_entry_2.at(0) << endl;
    if (journal_entry_1.at(0) > journal_entry_2.at(0))
    {
        journal_entry_1.swap(journal_entry_2);
    }

    // journal_entry_1.swap(journal_entry_2);

    cout << journal_entry_1 << "\n" << journal_entry_2;

    cout << endl;
    return 0; 
}