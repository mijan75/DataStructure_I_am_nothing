#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[],int n);

int main()
{
    int arr[100], n=0;
    cin >>n;
    bubbleSort(arr,n);
    return 0;
}

void bubbleSort(int arr[],int n)
{
    for (int i=0; i<n;i++)
    {
        cin >>arr[i];
    }

    for (int i=0; i<n-1; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (arr[i]>arr[j])
            {
                //swap(arr[i],arr[j]);
                int swapp = 0;
                swapp = arr[i];
                arr[i] = arr[j];
                arr[j] = swapp;
            }
        }
    }

    for (int i=0; i<n; i++)
    {
        cout << arr[i] <<" ";
    }
}
