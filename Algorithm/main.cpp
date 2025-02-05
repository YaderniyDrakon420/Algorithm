#include <iostream>
#include <vector>
#include "operations.h"

int main()
{
    std::vector<int> arr = { 5, 2, 1, 4, 3 };

    MinElement<std::vector<int>> min;
    MaxElement<std::vector<int>> max;
    SortAscending<std::vector<int>> sortAsc;
    SortDescending<std::vector<int>> sortDesc;
    IncreaseBy<std::vector<int>, int> increase(5);
    DecreaseBy<std::vector<int>, int> decrease(2);
    RemoveValue<std::vector<int>, int> remove(5);

    std::cout << "Min: " << min(arr) << "\n";
    std::cout << "Max: " << max(arr) << "\n";

    std::cout << "Sorted ascending: ";
    sortAsc(arr);
    print(arr);

    std::cout << "Sorted descending: ";
    sortDesc(arr);
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


