#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Getting the size of array
    int n; cout<< "Please enter the size of array: ";
    cin>> n;

    // Populating the array
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<< "Please enter the element at position " << i << " - ";
        cin>> arr[i];
    }

    // Sorting the array
    int tmp;
    int swaps;
    for (int i = n - 2; i >= 0; i--)
    {   swaps = 0;
        for (int j = 0; j <= i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                swaps += 1;
            }
        }
        if(swaps == 0)
        {
            break;
        }
    }

    // Printing new array
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i] << " ";
    }
}
