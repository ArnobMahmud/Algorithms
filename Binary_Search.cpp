#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int middle, searchIndex,
    left = 0,
    right = 9;

    int arr[] = {2, 5, 7, 9, 13, 26, 31, 42, 51, 67};

    cout << "Enter a value which you want to search : " << endl;
    cin >> searchIndex;

    while (left <= right)
    {
        middle = (left + right) / 2;
        if (arr[middle] == searchIndex)
        {
            cout << "Item found at " << middle << " index" << endl;
            break;
        }
        else if ( arr[middle] < searchIndex)
        {
            left = middle + 1;
        }
        else
        {
            right = middle - 1;
        }
    }
    cout << "Item not found ! " << endl;

    return 0;
}
