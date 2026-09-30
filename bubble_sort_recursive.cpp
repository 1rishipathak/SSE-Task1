#include <bits/stdc++.h>
#include <iostream>

using namespace std;
void bubbleS(vector <int> &v, int n);

int main()
{
    vector <int> v;

    // Getting the size of the array
    int n; cout<< "Please enter the size of the array: ";
    cin>> n;
    
    // Populating the array
    for (int i = 0; i < n; i ++)
    {
        int tmp; cout<< "Please enter the element at position " << i + 1 << ": ";
        cin>> tmp;
        v.emplace_back(tmp);
    }

    // Sorting the array using bubble sort (recursion)
    bubbleS(v, n - 2);

    // Output
    for (int i = 0; i < n; i++)
    {
        cout<< v[i] << " ";
    }
}

void bubbleS(vector <int> &v, int n)
{   
    if ( n < 0)
    {
        return;
    }
    int swaps = 0;
    for (int j = 0; j <= n; j++)
    {
        if (v[j] > v[j+1])
        {
            int tmp;
            tmp = v[j];
            v[j] = v[j+1];
            v[j+1] = tmp;
            swaps++;
        }
    }

    if ( swaps == 0 )
    {
        return;
    }

    bubbleS(v, n - 1 );

}
