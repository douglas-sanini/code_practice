//What is a vector ?
//It is an array that can grow and shrink in size at execution time
//can provide bounds cheking 
//can use cool functions like sort, reverse, find, and more

//vectors are parte of standard library so we have to use: 
//#include <vector>
//using namespace std; 

//Vectors

#include <iostream>
#include <vector> // don't forget this in order to use vectors

using namespace std; 

int main() {
    //vector <char> vowels; //empty
    //vector <char> vowels (5); //5 intialized to zero€
   
    vector <char> vowels {'a', 'e', 'i', 'o', 'u'};

    cout << vowels[0] << endl;
    cout << vowels[4] << endl;

    vector <int> test_scores {100,98,89};

    cout << "\nTest scores using array syntax: " << endl;
    cout << test_scores[0] << endl; 
    cout << test_scores[1] << endl;
    cout << test_scores[2] << endl;

    cout << "\nTest scores using vector syntax: " << endl;
    cout << test_scores.at(0) << endl; //.at is bounds checked
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << "\nThere are " << test_scores.size() << " scores in the vector" << endl; //this is a method within the vector class

    cout << "\nEnter 3 test scores: " ; //<< endl;
    cin >> test_scores.at(0);
    cin >> test_scores.at(1);
    cin >> test_scores.at(2);

    cout << "\nUpdated test scores:" << endl;

    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;

    cout << "\nEnter a test score to add to the vector: ";

    int score_to_add {0};
    cin >> score_to_add;

    test_scores.push_back(score_to_add);



    // cout << test_scores.at(0) << endl;
    // cout << test_scores.at(1) << endl;
    // cout << test_scores.at(2) << endl;
    // cout << test_scores.at(3) << endl;


    
    cout << "\nEnter one more test score to add to the vector: ";

    cin >> score_to_add;
    test_scores.push_back(score_to_add);

    cout << "\nNow the test scores are:" << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << test_scores.at(3) << endl;
    cout << test_scores.at(4) << endl;

    cout << "\nCurrently there are " << test_scores.size() << " scores in this vector." << endl;

    cout << "\nThis should cause an exception!\n" << test_scores[50] << endl; 
    cout << "but it doesn't because we would be using array syntax which does not provide bound checking!"; 

    // cout << "\nThis should cause an exception!" << test_scores.at(10) << endl;
    // this returns 'std::out_of_range' message and terminates code because vector syntax provides bound checking and index (10) is out of bounds of the vector


    //Now let's work with a 2D-Vector
    vector <vector<int>> movie_ratings
    {
        {1, 2, 3, 4},
        {1, 2, 4, 4},
        {1, 3, 4, 5}
    };

    cout << "\nHere are the movie ratings for reviewer #1 using array syntax:" << endl;
    cout << movie_ratings[0][0] << endl; 
    cout << movie_ratings[0][1] << endl; 
    cout << movie_ratings[0][2] << endl;
    cout << movie_ratings[0][3] << endl;

    cout << "\nHere are the movie ratings for reviewer #1 using vector syntax:" << endl;
    cout << movie_ratings.at(0).at(0) << endl;
    cout << movie_ratings.at(0).at(1) << endl;
    cout << movie_ratings.at(0).at(2) << endl;
    cout << movie_ratings.at(0).at(3) << endl;

    }