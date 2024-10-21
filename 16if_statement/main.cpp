#include <iostream>

using namespace std;

int main() {
    
    int num {};
    const int min {10};
    const int max {100};

    cout << "Enter a number between " << min << " and " << max << ":";
    cin >> num;
    
    if (num >= min) {
        cout << "\n================== If statement 1 ====================" << endl;
        cout << num << " is greater than or equal to " << min << endl;
        // cout << num << " is smaller than " << min << endl;
        
        int diff {num-min};
        cout << num << " is " << diff << " greater than " << min << endl;
    }

    if (num <= max) {
        cout << "\n================== If statement 2 ====================" << endl;
        cout << num << " is less than or equal to " << max << endl;

        int diff{max-num}; //we have to declare diff once again bedcuase it was oly executed in the last block and since the block was executed already, the varible is gone.
        cout << num << " is " << diff << " less than " << max << endl;
    }

    if (num >= min && num <= max) {
        cout << "\n================== If statement 3 ====================" << endl;
        cout << num << " is in between " << min << " and " << max << endl;

        cout << "This means that statements 1 and 2 must also display" << endl;
    }

    if (num == min || num == max) {
        cout << "\n================== If statement 4 ====================" << endl;
        cout << num << " is on the boundaries " << min << " or " << max << endl;
        cout << "This means that all four statements must display" << endl;
    }

    cout << endl;
    return 0;
}