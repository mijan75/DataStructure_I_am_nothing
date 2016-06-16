#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int n);

int main()

{
    int arr[100] , n=0;
    cin >>n;
    selectionSort(arr,n);
    return 0;
}

void selectionSort(int arr[],int n)
{
    for (int i = 0;i<n;i++)
    {
        cin >>arr[i];
    }

    for (int i= 0;i<n-1;i++)
    {
        int min = i;
        for (int j = i+1;j<n;j++)
        {
            if (arr[min] >arr[j])
            {
                min = j;
            }
        }
        if (min != i)
        {
            //swap(arr[min],arr[i]);
            int swapp = 0;
            swapp = arr[i];
            arr[i] = arr[min];
            arr[min] = swapp;
        }
    }
    for (int i = 0;i<n;i++)
    {
        cout <<arr[i] << " ";
    }

}
