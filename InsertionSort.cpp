#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int n);

int main()
{
    int arr[100], n=0;
    cin >>n;
    insertionSort(arr,n);
    return 0;
}

void insertionSort(int arr[],int n)
{
    for (int i=0; i<n; i++)
    {
        cin >>arr[i];
    }
    for (int i=0; i<n; i++)
    {
        int key = arr[i];
        int j = i-1;

        while (j>-1 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    for (int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}
