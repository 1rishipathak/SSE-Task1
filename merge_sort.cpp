#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void mergeSort(vector<int> &v, int low, int high);
void Merge(vector <int> &v, int low, int mid, int high);

int main()
{
    vector <int> v;

    // Getting the size of array
    int n; cout<< "Please enter the size of the array: ";
    cin>> n;

    // Populating the array
    for(int i = 0; i < n; i++)
    {
        int temp;
        cout<< "Please enter the integer at position " << i + 1 << ": ";
        cin>> temp;
        v.emplace_back(temp);
    }

    mergeSort(v, 0, n - 1);

    for(int i = 0; i < n; i++)
    {
        cout<< v[i] << " ";
    }
    
}

void mergeSort(vector<int> &v, int low, int high)
{
    if ( low >= high )
    {
        return;
    }
    int mid = (low + high) / 2;
    mergeSort(v, low, mid);
    mergeSort(v, mid + 1, high);
    Merge(v,low,mid,high);
}

void Merge(vector <int> &v, int low, int mid, int high)
{
    int it1 = low;
    int it2 = mid + 1;

    vector <int> mrgd;
    while (it1 <= mid && it2 <= high)
    {
        if(v[it1] <= v[it2])
        {
            mrgd.emplace_back(v[it1]);
            it1++;
        }
        else
        {
            mrgd.emplace_back(v[it2]);
            it2++;
        }
    }

    while (it1 <= mid)
    {
        mrgd.emplace_back(v[it1]);
        it1++;
    }

    while (it2 <= high)
    {
        mrgd.emplace_back(v[it2]);
        it2++;
    }

    for(int i = low; i <= high; i++)
    {
        v[i] = mrgd[i - low];
    }

    return;

}