#include <iostream>

void swap_pointers(int* ptr1, int* ptr2) {
    // Swap values without a temporary variable
    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 = *ptr1 - *ptr2;
}

int main() {
    int a = 5;
    int b = 10;

    int* ptrA = &a;
    int* ptrB = &b;

    swap_pointers(ptrA, ptrB);

    // Output the swapped values
    std::cout << "a = " << a << ", b = " << b << std::endl;

    return 0;
}
