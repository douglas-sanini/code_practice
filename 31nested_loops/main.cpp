//nested loops
#include <iostream> 
#include <vector>
using namespace std;

int main()
{
//it's composed of outer and inner loops where the inner loop executes completley before moving on to the next iteration of the outer loop and then repeating the whole inner loop once again
    
//Multiplication Table!
    for (int num1{1}; num1 <= 10; ++num1)
    {
        for(int num2{1}; num2 <= 10; ++ num2)
        {
           cout << num1 << "*" << num2 << "=" << num1*num2 << endl;
        }
        cout << "-------------------" << endl;
    }
    

//Histogram!
    // int num_items{};

    // cout << "How many data items do you have?";
    // cin >> num_items;

    // vector<int> data{};

    // for (int i{1}; i<=num_items; ++i)
    // {
    //     int data_item{};
    //     cout << "Enter data item " << i << ":";
    //     cin >> data_item;
    //     data.push_back(data_item);
    // }

    // cout << "\nDisplaying Histogram" << endl;
    // for (auto val: data)
    // {    
    //     for (int i{1}; i<=val; ++i)
    //     {
    //         if (i%5 == 0)
    //             cout <<  "*";
    //         else 
    //             cout << "-"; 
    //     }
    //     cout << endl;
    // }    
    cout << endl;
    return 0;
}