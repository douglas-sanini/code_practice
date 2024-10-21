// Section 10
// Challenge - 
// Substitution Cipher

/*
A simple and very old method of sending secret messages is the substitution cipher.
You might have used this cipher with your friends when you were a kid.
Basically, each letter of the alphabet gets replaced by another letter of the alphabet.
For example, every 'a' get replaced with an 'X', and every 'b' gets replaced with a 'Z', etc.

Write a program thats ask a user to enter a secret message.

Encrypt this message using the substitution cipher and display the encrypted message.
Then decryped the encrypted message back to the original message.

You may use the 2 strings below for  your subsitition.
For example, to encrypt you can replace the character at position n in alphabet 
with the character at position n in key.

To decrypt you can replace the character at position n in key
with the character at position n in alphabet.

Have fun! And make the cipher stronger if you wish!
Currently the cipher only substitutes letters - you could easily add digits, puncuation, whitespace and so
forth. Also, currently the cipher always substitues a lowercase letter with an uppercase letter and vice-versa.
This could also be improved.

Remember, the less code you write the less code you have to test!
Reuse existing functionality in libraries and in the std::string class!
*/

//THE CIPHER CHALLENGE
#include <iostream>
#include <string>
using namespace std; 

int main() {
    
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key      {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    
    string secret_message{};
    cout << "Provide message to be encrypted: " << endl; 
    getline(cin, secret_message);

    for (size_t i{0}; i < secret_message.size(); i++)
    {
        size_t position = alphabet.find(secret_message.at(i));
        if (position != string::npos)
        {
            secret_message.at(i) = key.at(position);
        }
    }

    cout << "Your encrypted message: " << secret_message << endl;


    for (size_t i{0}; i < secret_message.size(); i++)
    {
        size_t position = key.find(secret_message.at(i));
        if (position != string::npos)
        {
            secret_message.at(i) = alphabet.at(position);
        }
    }

    cout << "Your uncrytped message is: " << secret_message << endl;
    cout << endl;
    return 0;
}
