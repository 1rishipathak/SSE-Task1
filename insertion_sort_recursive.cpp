#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void iSort(vector <int> &v, int c, int n);
int main()
{
    vector <int> v;
    // Getting the size of array
    int n; cout<< "Please enter the size of the array: ";
    cin>> n;

    // Populating the array
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cout<< "Please enter the element at position " << i + 1 << ": ";
        cin>> tmp;
        v.emplace_back(tmp);
    }

    // Sorting using insertion sort (recursive)
    iSort(v, 1, n);

    // Printing the output
    for (int i = 0; i < n; i++)
    {
        cout<< v[i] << " ";
    }
}

void iSort(vector <int> &v, int c, int n)
{   
    if ( c == n )
    {
        return;
    }
    int j = c;
    while ( j >= 1 && v[j - 1] > v[j])
    {
        int tmp;
        tmp = v[j];
        v[j] = v[j - 1];
        v[j - 1] = tmp;
        j--;
    }

    iSort(v, c + 1, n);

}