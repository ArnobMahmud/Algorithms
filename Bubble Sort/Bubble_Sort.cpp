/*
    Author : Arnob Mahmud

    Mail : arnob.tech.me@gmail.com
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {1, 3, 5, 8};
    int n;

    int result = BubbleSort(arr, 4);
    cout << result << endl;
    return 0;
}

int BubbleSort(int A[], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
    return temp;
}
