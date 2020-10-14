/*
    Author : Arnob Mahmud

    Mail : arnob.tech.me@gmail.com
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {3, 7, 11, 9, 23, 15, 64, 42, 32, 71};

    int searchItem;
    
    cout << "Enter a value which you want to search : " << endl;
    cin >> searchItem;

    for (int i = 0; i < 10; i++)
    {
        if ( arr[i] == searchItem)
        {
            cout << "Item found at index : " << i << endl;
            break;
        } 
    }
    cout << "Item not found ! " << endl;
    
    return 0;
}