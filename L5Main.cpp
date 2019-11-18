#include "L5Other.hpp"
#include "L5Sorting.hpp"

int main()
{
    cout << "Input elements of your matrix:\n" << endl;
    Array arr[n];
    Input_(arr);
    cout << "\nYour matrix:\n" << endl;
    ShowYourMatrix(arr);
    Sorting(arr, 5);
    cout << "\nSorted matrix:\n" << endl;
    ShowYourMatrix(arr);
    cout << "\nCount:\n" << endl;
    Count(arr);
}
