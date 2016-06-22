#include <bits\stdc++.h>
using namespace std;

void Sort(int array[],int n);
bool Binary_search(int array[],int low,int high,int find);

int main()
{
    int n=0;
    cout << "Enter the number of element" <<endl;
    cin >>n;
    int array[n];
    for (int i=0; i<n; i++)
    {
        cin >>array[i];
    }
    Sort(array,n);
    return 0;
}

void Sort(int array[],int n)
{
    int min=0 ,i=0,j=0;
    for (i=0; i<n-1;i++)
    {
        min = i;
        for (j=i+1; j<n; j++)
        {
            if (array[j]<array[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            int temp = array[i];
            array[i] = array[min];
            array[min] = temp;
        }
    }

    int find = 0;
    int low = 0;
    int high = n-1;
    cout << "Enter a number to search" <<endl;
    cin >> find;
    if (Binary_search(array, low, high, find))
    {
        cout << find << " is in the array"<<endl;
    }
    else
    {
        cout <<"Not found"<<endl;
    }
}

bool Binary_search(int array[],int low,int high,int find)
{
    int mid = (low + high)/2;
    if (low > high)
    {
        return false;
    }
    else if(find > array[mid])
    {
        low = mid + 1;
        Binary_search(array,low,high,find);
    }
    else if (find < array[mid])
    {
        high = mid - 1;
        Binary_search(array,low,high,find);
    }
    else
    {
        return true;
    }
}
