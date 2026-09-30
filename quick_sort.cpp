#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int placepivot(vector <int> &v, int low, int high);
void qSort ( vector <int> &v, int low, int high );

int main()
{
    vector <int> v;
    // Getting the size of the array
    int n; cout<< "Please enter the size of the array: ";
    cin>> n;

    // Populating the array
    for (int i = 0; i < n; i++)
    {
        int temp;
        cout<< "Please enter the value at position " << i + 1<< ": ";
        cin>> temp;
        v.emplace_back(temp);
    }

    // Using quicksort to sort the array
    qSort(v, 0, n - 1);

    // Output
    for (int i = 0; i < n; i++)
    {
        cout<< v[i] << " ";
    }

}

void qSort ( vector <int> &v, int low, int high )
{   
    if (low >= high)
    {
        return;
    }
    int pivot = placepivot(v, low, high);
    qSort(v, low, pivot - 1);
    qSort(v, pivot + 1, high);

}

int placepivot(vector <int> &v, int low, int high)
{
    int pivot = low;
    int i = low;
    int j = high;

    while ( i < j)
    {
        while( v[i] <= v[pivot] && i < high)
        {
            i++;
        }

        while ( v[j] > v[pivot] && j > low)
        {
            j--;
        }

        if ( i < j)
        {
            int temp;
            temp = v[i];
            v[i] = v[j];
            v[j] = temp;
        }
    }

    int temp;
    temp = v[low];
    v[low] = v[j];
    v[j] = temp;

    return j;
}