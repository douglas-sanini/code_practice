#include <iostream>
#include <cstring> // for c-style string functions
#include <cctype> // for charcter-based functions

using namespace std;

int main() 
{
    char first_name[20] {}; //[] declares number of elements
    char last_name[20] {}; //{} intialize as null character
    char full_name[50] {};
    char temp[50] {};



//     cout << "Please enter your first name: ";
//     cin >> first_name;

//     cout << "Please enter you last name: "; 
//     cin >> last_name;

//     cout << "Hello, " << first_name << ", Your first name has " << strlen (first_name) << " characters"<< endl; //the strlen() function doesn't return an unsigned-integer type but enstead a size_t datatype
//     cout << "and your last name, " << last_name << ", has " << strlen(last_name) << " characters." << endl; //size_t is unsigned integer type that is commonly used for representing sizes and indices of objects in memory
//  //size_t type is typically used to store the sizes of arrays, the results of the sizeof operator, and the return types of certain standard library functions like strlen() and std::vector::size(). It is guaranteed to be able to represent the maximum size of any object in memory.
    



//     strcpy(full_name, first_name); //copy first_name to full_name 
//     strcat(full_name, " "); //concatenate full_name to full_name
//     strcat(full_name, last_name); //concatenate last_name to full_name
//     cout << "Your full name is " << full_name << endl; 
        
    
    // cout << "-----------------------------------" << endl;
    // cout << "Enter your full name: "; 
    // cin >> full_name;
    
    // cout << "Your full name is " << full_name << endl; 
    //does not retrieve last name due to ending cin after space




// strcmp()
// If the first string is less than the second string, the function returns a negative value.
// If the first string is greater than the second string, the function returns a positive value.
// If the strings are equal, the function returns 0.
    cout << "Enter your full name: ";
    cin.getline(full_name, 50); //retreives entire line up into 50 characters or until end of input
    cout << "Your full name is " << full_name << " nice" << endl; 

    cout << "-----------------------------" << endl;
    strcpy(temp, full_name);
    cout << "strcmp:" << strcmp(temp, full_name) << endl;
    if(strcmp(temp, full_name) == 0)
        cout << temp << " and " << full_name << " are the same" << endl;
    else 
        cout << temp << " and " << full_name << "are different" << endl;
    cout << "---------------------------------" << endl;  
    

   for(size_t i{ 0 }; i < strlen(full_name); ++i) 
   {
       if(isalpha(full_name[i]))
           full_name[i] = toupper(full_name[i]);
   }
   cout << "Your full name is " << full_name << endl;


   cout << "-------------------------------" << endl;
   cout << "strcmp:" << strcmp(temp, full_name) << endl;
   if(strcmp(temp, full_name) == 0)
       cout << temp << " and " << full_name << " are the same" << endl;
   else
       cout << temp << " and " << full_name << " are different" << endl;

   cout << "-------------------------------" << endl;
   cout << "Result of comparing " << temp << " and " <<  full_name <<  ": " << strcmp(temp, full_name) << endl;
   cout << "Result of comparing " << full_name << " and " <<  temp <<  ": " << strcmp(full_name, temp) << endl;

    cout  << endl;
    return 0;
}

