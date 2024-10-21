//for loop

#include <iostream>
#include <vector>

using namespace std;

int main() 
{

    for (int i{1}; i<=10; ++i)
        cout << i << endl;

    cout << endl;

    for (int i{1}; i<=10; i+=2)
        cout << i << endl;

    cout << endl;

    for (int i{10}; i>0; --i)
    {
        //cout << "Blastoff";
        cout << i << endl;
    }
    cout << "Blastoff!" << endl;
    
    cout << endl;
    
    for (int i{10}; i<=100; i+=10)
    {
        if (i%15==0)
        cout << i << endl;
    }

    cout << endl;

    for (int i{1}, j{5}; i<=5; ++i, ++j)
        cout << i << " + " << j << " = " << (i+j) << endl;


    cout << endl;


    for (int i{1}; i<=100; ++i)
    {
        cout << i;
        if (i % 5 == 0)
            cout << endl;

        else if (i < 10)
            cout << "  ";

        else 
            cout << " ";
    }

    cout << endl;

    for (int i{1}; i<=100; ++i)
    {     
        if (i<10)
            cout << i << "  ";
        else
            cout << i << ((i%10==0)?"\n":" ");
    
    }

    cout << endl;


    vector<int> nums{10,20,30,40,50};
    for (unsigned i{0}; i < nums.size(); ++i) //using unsigned type because nums.size() can't be negative so it is good practice to have both values in the conditional operation with the same type
        cout << nums[i] << endl;


    cout << endl;

    int sum{0};
    
    for (int i{1}; i<=15; ++i)
        {
            if (i%2 != 0)
                sum += i; 
            //cout << sum << endl;   
        }
    cout << sum;
    cout << endl;
    return 0;

}