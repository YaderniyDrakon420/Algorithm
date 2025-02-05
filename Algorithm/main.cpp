#include <iostream>
#include "operations.h"

int main()
{
    minchislo min;
    maxchislo max;
    zrostanya zrist;
    spadanya spad;
    IncreaseBy increase(5);
    DecreaseBy decrease(2);
    RemoveValue remove(5);

    std::vector<int> arr = { 5,2,1,4,3 };

    std::cout << "Min: " << min(arr) << "\n";
    std::cout << "Max: " << max(arr) << "\n";

    std::cout << "Za zrostanyam: ";
    zrist(arr);
    print(arr);

    std::cout << "Za spadanyam: ";
    spad(arr);
    print(arr);

    increase(arr);
    std::cout << "Increased by 5: ";
    print(arr);

    decrease(arr);
    std::cout << "Decreased by 2: ";
    print(arr);

    remove(arr);
    std::cout << "Removed 5s: ";
    print(arr);

    return 0;
}
