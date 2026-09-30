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
    int min, tmp;
    for (int i = 0; i < n; i++)
    {
        min = i;
        for (int j = i; j < n; j++)
        {
            if(arr[j] < arr[i])
            {
                min = j;
            }
        }
        tmp = arr[i];
        arr[i] =  arr[min];
        arr[min] = tmp;
    }

    // Printing new array
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i] << " ";
    }
}
